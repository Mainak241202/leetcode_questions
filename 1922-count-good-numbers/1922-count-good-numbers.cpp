#define mod 1000000007;
class Solution {
public:
    long long Pow(long long x,long long y){
        if(y==0) return 1;
        long long ans = Pow(x,y/2);
        ans*=ans;
        ans%=mod;
        if(y%2==1) {
            ans*=x;
            ans%=mod;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long e = n/2+n%2;
        long long o = n/2;
        return (Pow(5,e)*Pow(4,o))%mod;
    }
};