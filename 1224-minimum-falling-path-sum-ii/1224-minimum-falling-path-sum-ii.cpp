class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int j=0;j<n;j++){
            dp[0][j] = matrix[0][j];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                if(dp[i][j]!=0) return matrix[i][j];

                int mini = 1e9;
                for(int k=0;k<n;k++){
                    if(k!=j){
                        int move = matrix[i][j] + dp[i-1][k];
                        mini = min(mini,move);
                    }
                }
                dp[i][j] = mini;
            }
        }
        int mini = 1e9;
        for(int j=0;j<n;j++){
            mini = min(mini,dp[n-1][j]);
        }
        return mini;
    }
};