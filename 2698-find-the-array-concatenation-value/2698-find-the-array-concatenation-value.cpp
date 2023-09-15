class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long concat = 0;
        int n = nums.size();
        for(int i=0;i<n/2;i++){
            string str = to_string(nums[i])+to_string(nums[n-i-1]);
            concat+=stol(str);
        }
        if(n%2==1) concat+=nums[n/2];
        return concat;
    }
};