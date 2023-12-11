class Solution {
public:
    vector<vector<int>> v;

    void generate(vector<int> &temp,int i,vector<int> &nums){
        if(i==nums.size()){
            v.push_back(temp);
            return;
        }
        //generate(temp,i+1,nums);
        temp.push_back(nums[i]);
        generate(temp,i+1,nums);
        temp.pop_back();
        generate(temp,i+1,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        generate(temp,0,nums);
        return v;
    }
};