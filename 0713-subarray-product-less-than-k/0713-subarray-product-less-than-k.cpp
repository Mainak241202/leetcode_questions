class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int c = 0,prod=1,left=0;
        int n = nums.size();
        if(k<=1) return 0;
        for(int i=0;i<n;i++){
            prod*=nums[i];
            while(prod>=k && left<n){
                prod/=nums[left];
                left++;
            }
            if(prod<k){
                c+=i-left+1;
            }
        }
        return c;
    }
};