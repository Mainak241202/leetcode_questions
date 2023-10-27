class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        long int m = s + (e-s)/2;
        long int ans = -1;
        while(s<=e){
            long int sq = m*m;
            if(sq==x){return m;}
            if(sq<x){
                ans = m;
                s = m+1;
            }
            else{
                e = m-1;
            }
            m = s + (e-s)/2;
        }
        return ans;
    }
};