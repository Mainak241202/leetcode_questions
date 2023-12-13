class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> diff(m,vector<int>(n,0));
        vector<int> onesRow(m),onesCol(n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    onesRow[i]++;
                    onesCol[j]++;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                diff[i][j] = 2*onesRow[i]+2*onesCol[j]-m-n;
            }
        }
        return diff;

    }
};