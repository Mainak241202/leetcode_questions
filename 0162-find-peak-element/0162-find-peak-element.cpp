class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();
        int l = 1,h = n-2;
        if(n==1) return 0;
        if(arr[0]>arr[1]) return 0;
        if(arr[n-2]<arr[n-1]) return n-1;
        while(l<=h){
            int m = (l+h)/2;
            if(arr[m]>arr[m-1] && arr[m]>arr[m+1]) return m;
            else if(arr[m]>arr[m-1]) l = m+1;
            else h= m-1;
        }
        return -1;
    }
};