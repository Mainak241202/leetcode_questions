class Solution {
public:
    string removeStars(string s) {
        stack<int> st;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='*' && !st.empty()){
                st.pop();
            }
            else if(s[i]!='*'){
                st.push(s[i]);
            }
        }
        string str;
        while(!st.empty()){
            str.push_back(st.top());
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};