class Solution {
public:
    bool isPalindrome(string s,int left,int right){
        while(left<=right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    void getPartition(vector<vector<string>> &v,vector<string> &temp,int i,string s){
        if(i==s.size()){
            v.push_back(temp);
            return;
        }
        for(int j=i;j<s.size();j++){
            if(isPalindrome(s,i,j)){
                temp.push_back(s.substr(i,j-i+1));
                getPartition(v,temp,j+1,s);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> v;
        vector<string> temp;
        getPartition(v,temp,0,s);
        return v;
    }
};