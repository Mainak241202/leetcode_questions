// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int start = 0;
        long int end = n;
        long int firstBad;
        while(start<=end){
            long int m = start + (end-start)/2;
            if(isBadVersion(m)==1){
                firstBad = m;
                end = m-1;
            }
            else start = m+1;
        }
        return firstBad;
    }
};