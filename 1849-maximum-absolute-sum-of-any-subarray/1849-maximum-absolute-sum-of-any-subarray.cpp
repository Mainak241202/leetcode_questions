class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum1=0,sum2=0,maxi=0,mini=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum1+=nums[i];
            sum2+=nums[i];
            if(sum1<0) sum1=0;
            if(sum2>=0) sum2=0;
            maxi = max(maxi,sum1);
            mini = min(mini,sum2);
        }
        return max(maxi,abs(mini));
    }
};