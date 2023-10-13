class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        for(auto it : mp){
            if(it.second==1 && mp.find(it.first+1)==mp.end() && mp.find(it.first-1)==mp.end()){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};