class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int> mp;
        int ans = -1;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end()){
                ans = max(ans,i-mp[s[i]]-1);
            }
            else{
                mp[s[i]] = i;
            }
        }
        return ans;
    }
};