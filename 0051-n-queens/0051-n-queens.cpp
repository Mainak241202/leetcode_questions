class Solution {
public:
    bool check(int row,int col,int n,vector<string> &board){
        //check in upper left diagonal
        int duprow = row;
        int dupcol = col;
        while(row >= 0 && col >= 0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row--;
            col--;
        }

        //check in same row
        col = dupcol;
        row = duprow;
        while(col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            col--;
        }
        
        //check in lower left diagonal
        row = duprow;
        col = dupcol;
        while(row < n && col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row++;
            col--;
        }
        return true;
    }
    void solve(vector<vector<string>> &v,vector<string> &board,int col,int n){
        if(col==n){
            v.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(check(row,col,n,board)){
                board[row][col] = 'Q';
                solve(v,board,col+1,n);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> v;
        vector<string> board(n,string(n,'.'));
        solve(v,board,0,n);
        return v;
    }
};