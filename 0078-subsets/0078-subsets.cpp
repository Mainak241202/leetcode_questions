class Solution {
public:
    void generate(vector<vector<int>> &v,vector<int> &temp,int i,vector<int> &nums){
        if(i==nums.size()){
            v.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        generate(v,temp,i+1,nums);
        temp.pop_back();
        generate(v,temp,i+1,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> temp;
        generate(v,temp,0,nums);
        return v;
    }
};