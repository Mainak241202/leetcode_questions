class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int n = a.size();
        if(n==1) return 0;
        int sum=0,prevSum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        for(int i=0;i<n;i++){
            prevSum+=a[i];
            if(prevSum-a[i]==sum-prevSum) return i;
        }
        return -1;
    }
};