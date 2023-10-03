class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s = "";
        int n = columnNumber;
        while(n>0){
            n--;
            s+=('A'+n%26);
            n/=26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};