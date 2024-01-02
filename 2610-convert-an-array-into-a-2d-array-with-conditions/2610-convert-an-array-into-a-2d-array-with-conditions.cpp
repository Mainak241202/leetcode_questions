class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        int c = 0;
        for(auto it: mp){
            c = max(c,it.second);
        }
        vector<vector<int>> v(c);
        for(auto it: mp){
            for(int i=0;i<it.second;i++){
                v[i].push_back(it.first);
            }
        }
        return v;
    }
};