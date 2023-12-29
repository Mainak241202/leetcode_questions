class Solution {
public:
    int dp[301][11];
    int solve(vector<int> &jD, int n, int i, int d){
        //base case
        //if there is only one day left, then you have to do all
        //remaining tasks in that day only and find the max of all tasks
        if(d==1){
            int maxi = jD[i];
            for(int ind=i;ind<n;ind++){
                maxi = max(maxi,jD[ind]);
            }
            return maxi;
        }
        if(dp[i][d]!=-1){
            return dp[i][d];
        }

        int totDiff = INT_MAX;
        int maxi = jD[i];
        for(int ind=i;ind<=(n-d);ind++){
            maxi = max(maxi,jD[ind]);
            int res = maxi + solve(jD,n,ind+1,d-1);
            totDiff = min(totDiff,res);
        }
        return dp[i][d] = totDiff;
    }

    int minDifficulty(vector<int>& jD, int d) {
        int n = jD.size();
        if(n<d){
            return -1;
        }
        memset(dp,-1,sizeof(dp));
        return solve(jD,n,0,d);
    }
};