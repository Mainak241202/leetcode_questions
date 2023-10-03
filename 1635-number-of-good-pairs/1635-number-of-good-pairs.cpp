class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        int c = 0;
        for(auto it: mp){
            c+=((it.second)*(it.second-1))/2;
        }
        return c;
    }
};