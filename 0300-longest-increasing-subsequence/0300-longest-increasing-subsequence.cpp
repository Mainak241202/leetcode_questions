class Solution {
public:
    int findLen(vector<int> &nums,int i,int prev,vector<vector<int>> &dp){
        if(i==nums.size()){
            return 0;
        }
        if(dp[i][prev+1]!=-1) return dp[i][prev+1];

        int pick = 0;
        if(prev==-1 || nums[i]>nums[prev]){
            pick = 1+findLen(nums,i+1,i,dp);
        }
        int notPick = findLen(nums,i+1,prev,dp);
        dp[i][prev+1] = max(pick,notPick);
        return dp[i][prev+1];
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int> (n+1,-1));
        return findLen(nums,0,-1,dp);
    }
};