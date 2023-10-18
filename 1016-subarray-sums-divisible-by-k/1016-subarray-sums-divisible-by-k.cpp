class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0] = 1;
        int prefixSum = 0,c=0;
        for(int i=0;i<n;i++){
            prefixSum=(prefixSum+nums[i])%k;
            if(prefixSum<0) prefixSum = prefixSum+k;
            c+=mp[prefixSum];
            mp[prefixSum]++;
        }
        return c;
    }
};