class Solution {
public:
    int firstOccurence(vector<int>& nums,int k){
        int a = nums.size();
        int s = 0,e = a - 1;
        int first = -1;
        while(s<=e){
            int m = s+(e-s)/2;
            if(nums[m]==k){
                first = m;
                e = m-1;
            }
            else if(nums[m]<k)s = m+1;
            else e = m-1;
        }
        return first;
    }
    int lastOccurence(vector<int>& nums,int k){
        int a = nums.size();
        int s = 0,e = a - 1;
        int last = -1;
        while(s<=e){
            int m = s+(e-s)/2;
            if(nums[m]==k){
                last = m;
                s = m+1;
            }
            else if(nums[m]<k)s = m+1;
            else e = m-1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int k) {
        int first = firstOccurence(nums,k);
        if(first==-1) return {-1,-1};
        int last = lastOccurence(nums,k);
        return {first,last};
    }
};