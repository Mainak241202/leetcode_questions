class Solution {
public:
    string removeOuterParentheses(string s) {
        string s1 = "";
        int c = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' && c==0){
                c++;
            }
            else if(s[i]=='(' && c>=1){
                c++;
                s1+=s[i];
            }
            else if(s[i]==')' && c>1){
                c--;
                s1+=s[i];
            }
            else{
                c--;
            }
        }
        return s1;
    }
};