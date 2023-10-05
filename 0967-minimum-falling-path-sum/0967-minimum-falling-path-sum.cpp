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

                int up = matrix[i][j] + dp[i-1][j];

                int leftDiag = matrix[i][j];
                if((j-1)>=0) leftDiag+=dp[i-1][j-1];
                else leftDiag+=1e9;

                int rightDiag = matrix[i][j];
                if((j+1)<n) rightDiag+=dp[i-1][j+1];
                else rightDiag+=1e9;

                dp[i][j] = min(leftDiag,min(up,rightDiag));
            }
        }
        int mini = 1e9;
        for(int j=0;j<n;j++){
            mini = min(mini,dp[n-1][j]);
        }
        return mini;
    }
};