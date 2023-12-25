class Solution {
public:
    string removeKdigits(string num, int k) {
        string s = "";
        int n = num.size();
        stack<char> st;
        st.push(num[0]);
        //checks if incoming number is smaller than the top element of stack or not
        for(int i=1;i<n;i++){
           while(!st.empty() && st.top()>num[i] && k>0){
               st.pop();
               k--;
           }
           st.push(num[i]);
        }

        //handles the cases for examples such as num="12345"
        while(k>0){
            st.pop();
            k--;
        }

        //adds the elements of stack to the string
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }

        //removes the leading zeros from string
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