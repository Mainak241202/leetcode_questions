class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mp;
        for(char it : s){
            mp[it]++;
        }
        int n = t.size();
        for(int i=0;i<n;i++){
            if(mp.find(t[i])!=mp.end()){
                mp[t[i]]--;
            }
        }
        int c = 0;
        for(auto it: mp){
            if(it.second>0){
                c+=it.second;
            }
        }
        return c;
    }
};