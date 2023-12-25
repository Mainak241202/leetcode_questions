class Solution {
public:
    string removeKdigits(string num, int k) {
        string s = "";
        int n = num.size();
        stack<char> st;
        st.push(num[0]);
        for(int i=1;i<n;i++){
           while(!st.empty() && st.top()>num[i] && k>0){
               st.pop();
               k--;
           }
           st.push(num[i]);
        }

        while(k>0){
            st.pop();
            k--;
        }

        while(!st.empty()){
            s+=st.top();
            st.pop();
        }

        while(!s.empty() && s.back()=='0'){
            s.pop_back();
        }

        reverse(s.begin(),s.end());
        if(s.empty()){
            return "0";
        }
        return s;
    }
};