class Solution {
public:
    int climbStairs(int n) {
       if(n<=2) return n;
       int prev1 = 1,prev = 2;
       for(int i=3;i<=n;i++){
           int cur = prev1 + prev;
           prev1 = prev;
           prev = cur;
       }
       return prev;
    }
};