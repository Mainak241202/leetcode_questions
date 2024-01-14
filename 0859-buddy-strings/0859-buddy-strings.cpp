class Solution {
public:
    bool checkFreq(string &s){
        unordered_map<char,int> mp;
        for(char it: s){
            mp[it]++;
        }
        for(auto it: mp){
            if(it.second>1){
                return true;
            }
        }
        return false;
    }
    bool buddyStrings(string s, string goal) {
        int n = s.size();
        int m = goal.size();
        if(n!=m){
            return false;
        }
        if(s==goal){
            return checkFreq(s);
        }
        vector<int> v;
        for(int i=0;i<n;i++){
            if(s[i]!=goal[i]){
                v.push_back(i);
            }
        }
        if(v.size()!=2) return false;
        else{
            swap(s[v[0]],s[v[1]]);
        }
        if(s==goal){
            return true;
        }
        return false;
    }
};