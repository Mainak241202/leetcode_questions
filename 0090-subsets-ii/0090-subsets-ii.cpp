class Solution {
public:
    void generate(vector<vector<int>> &v,vector<int> &temp,int i,vector<int> &nums){
        v.push_back(temp);
        for (int j = i; j < nums.size(); j++) {
            if(j>i && nums[j]==nums[j-1]) continue;
            temp.push_back(nums[j]);
            generate(v,temp,j + 1,nums);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        vector<int> temp;
        generate(v,temp,0,nums);
        return v;
    }
};