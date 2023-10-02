class Solution {
public:
    int mod = 1e9+7;

    int distinctSubseqII(string s) {
        int n = s.size();
        vector<int> v(26,-1);
        long long dp[n+1];
        dp[0] = 1;
        for(int i=1;i<=n;i++){
            dp[i] = 2*dp[i-1];
            if(v[s[i-1]-'a']!=-1){
                dp[i]-=dp[v[s[i-1]-'a']];
                if(dp[i]<0){
                    dp[i]+=mod;
                }
                
            }
            dp[i]%=mod;
            v[s[i-1]-'a'] = i-1;
        }
         return (dp[n]-1+mod)%mod;
    }
};