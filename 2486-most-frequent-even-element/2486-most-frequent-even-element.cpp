class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ans = -1,maxi=0;
        map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it: mp){
            if(it.first%2==0 && it.second>maxi){
                maxi = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};