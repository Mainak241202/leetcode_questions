class Solution {
public:
    int reverseNum(int num){
        int ans = 0;
        while(num!=0){
            int dig = num%10;
            ans = (ans*10) + dig;
            num/=10;
        }
        return ans;
    }
    bool isSameAfterReversals(int num) {
        if(num==0) return true;
        int reverse1 = reverseNum(num);
        int reverse2 = reverseNum(reverse1);
        if(reverse2==num) return true;
        return false;
    }
};