class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int l = 1,h = n-1;
        int ans = 0;
        while(l<=h){
            int m = l+(h-l)/2;
            if(arr[m]>arr[m-1] && arr[m]>arr[m+1]){
                ans = m;
                break;
            }
            else if(arr[m]>arr[m-1]){
                l = m+1;
            }
            else {h=m-1;}
        }
        return ans;
    }
};