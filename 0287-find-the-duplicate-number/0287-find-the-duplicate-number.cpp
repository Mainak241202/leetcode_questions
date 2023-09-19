class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int dup;
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
                dup = nums[i];
                break;
            }
        }
        return dup;
    }
};