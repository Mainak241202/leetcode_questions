class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.size(),m = t.size();
        stack<int> st1,st2;
        for(int i=0;i<n;i++){
            if(s[i]=='#' && !st1.empty()){
                st1.pop();
            }
            else if(s[i]!='#'){
                st1.push(s[i]);
            }
        }
        for(int i=0;i<m;i++){
            if(t[i]=='#' && !st2.empty()){
                st2.pop();
            }
            else if(t[i]!='#'){
                st2.push(t[i]);
            }
        }
        return st1==st2;
    }
};