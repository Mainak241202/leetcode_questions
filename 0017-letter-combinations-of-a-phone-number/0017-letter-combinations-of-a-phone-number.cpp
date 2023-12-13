class Solution {
public:
    void generate(vector<string> &v,string &s,int i,string &digits,vector<string> &v1){
        if(i==digits.size()){
            v.push_back(s);
            return;
        }
        int num = digits[i]-'0';
        string val = v1[num];
        for(int j=0;j<val.size();j++){
            s+=val[j];
            generate(v,s,i+1,digits,v1);
            s.erase(s.size()-1);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> v;
        string s = "";
        if(digits=="") return v;
        vector<string> v1 = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        generate(v,s,0,digits,v1);
        return v;
    }
};