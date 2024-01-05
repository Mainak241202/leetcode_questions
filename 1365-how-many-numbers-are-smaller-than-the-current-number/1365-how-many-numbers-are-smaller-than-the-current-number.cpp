class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int c = 0;
            for(int j=0;j<n;j++){
                if(j!=i && nums[i]-nums[j]>0){
                    c++;
                }
            }
            v.push_back(c);
        }
        return v;
    }
};