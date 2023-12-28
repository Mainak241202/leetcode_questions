class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> mp;
	    for(auto it: p){
	        mp[it]++;
	    }
	    int n = p.size();
	    int m = s.size();
	    int i=0,j=0;
        int c = mp.size();
        vector<int> v;
	    while(j<m){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    c--;
                }
            }
	        if(j-i+1<n){
	            j++;
	        }
	        else if(j-i+1==n){
	            if(c==0){
                    v.push_back(i);
                }
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]==1){
                        c++;
                    }
                }
	            i++;j++;
	        }
	    }
	    return v;
    }
};