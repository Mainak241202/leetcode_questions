class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        int cnt = 0;
        for(auto it:mp){
            int a = it.first-diff;
            int b = diff+it.first;
            if(mp.find(a)!=mp.end() && mp.find(b)!=mp.end()){
                cnt++;
            }
        }
        return cnt;
    }
};