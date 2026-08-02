class Solution {
public:

    bool isValid(int row,int col,char dig, vector<vector<char>>&board){
        int r=row;
        int c=col;
        //row check
        for(int i =0;i<9;i++){
            if(board[r][i]==dig) return false;
        }
        //column check
        r=row;
        c=col;
        for(int j =0;j<9;j++){
            if(board[j][c]==dig) return false;
        }
        //1 box (3*3) check
       
        r=(row/3)*3;
        c=(col/3)*3;
        for(int i=r;i<r+3;i++){
            for(int j=c;j<c+3;j++){
                if(board[i][j]==dig) return false;
            }
        }
        return true;
    }
    bool helper(int row,int col,vector<vector<char>>&board){

        if(row==9){
            return true;
        }
        int nxtRow=row;
        int nxtCol=col+1;
        if(nxtCol==9){
            nxtRow=row+1;
            nxtCol=0;
        }
        if(board[row][col]!='.') { //occupied
            return helper(nxtRow,nxtCol,board);
        }
        for(int dig=1;dig<=9;dig++){
            char ch=dig+'0';
            if(isValid(row,col,ch,board)){
                board[row][col]=ch;
                if(helper(nxtRow,nxtCol,board)){
                    return true;
                }
                board[row][col]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(0,0,board);
    }
};
