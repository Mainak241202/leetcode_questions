class Solution {
public:
    int check(int i,string &s){
        int zeros = 0,ones = 0;
        for(int j=0;j<i;j++){
            if(s[j]=='0'){
                zeros++;
            }
        }
        for(int j=i;j<s.size();j++){
            if(s[j]=='1'){
                ones++;
            }
        }
        return zeros+ones;
    }
    int maxScore(string s) {
       int res = 0;
       int n = s.size();
       for(int i=1;i<n;i++){
           res = max(res,check(i,s));
       }
       return res;
    }
};