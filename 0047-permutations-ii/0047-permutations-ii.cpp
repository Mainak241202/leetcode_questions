class Solution {
public:
    void generate(vector<vector<int>> &v,int i,vector<int> &nums){
        if(i>=nums.size()){
            v.push_back(nums);
            return;
        }
        unordered_set<int> st;
        for(int j=i;j<nums.size();j++){
            if(st.find(nums[j])!=st.end()) continue;
            st.insert(nums[j]);
            swap(nums[i],nums[j]);
            generate(v,i+1,nums);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> v;
        generate(v,0,nums);
        return v;
    }
};