// The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

//Given an integer n, return the number of distinct solutions to the n-queens puzzle.

class Solution {
public:
    bool isSafe(int row,int col,vector<string>&board,int n){
        int r=row;
        int c=col;
        //upper left diagonal
        while(r>=0&&c>=0){
            if(board[r][c]=='Q')return false;
            r--;
            c--;
        }
        //left col
        c=col;
        r=row;
        while(c>=0){
            if(board[r][c]=='Q')return false;
            c--;
        }
        //lower left diagonal
        c=col;
        r=row;
        while(r<n&&c>=0){
            if(board[r][c]=='Q')return false;
            r++;
            c--;
        }
        return true;
    }
    void solve(int col,int n ,vector<string>&board,int &ans){
        if(col==n){
            ans++;
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,n,board,ans);
                board[row][col]='.';
            }
        }
    }
    int totalNQueens(int n) {
        int answer=0;
        vector<string>board(n);
        string s(n,'.');
        for(int i =0;i<n;i++) board[i]=s;
        solve(0,n,board,answer);
        return answer;
    }
};
