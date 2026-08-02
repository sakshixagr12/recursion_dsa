class Solution {
public:

    bool isvalid(int  row,int col,char ch,vector<vector<char>>&board){
        int r=row;
        int c=col;
        for(int i=0;i<9;i++){
            if(board[i][c]==ch) return false;
        }
        for(int j=0;j<9;j++) {
            if (board[r][j]==ch) return false;
        }
        r=(row/3)*3;
        c=(col/3)*3;
        for(int i=r; i<r+3; i++){
            for(int j=c; j<c+3; j++){
                if(board[i][j]==ch)
                    return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i =0;i<9;i++){
            for (int j=0; j<9; j++){
                if(board[i][j]=='.') continue;
                char ch=board[i][j];
                board[i][j]='.';
                if(!isvalid(i,j,ch,board)) return false;
                board[i][j]=ch;
            }
        }
        return true;
    }
};
