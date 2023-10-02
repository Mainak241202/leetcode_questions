class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(auto it : columnTitle){
            int c = it - 'A'  + 1;
            ans = ans*26+c;
        }
        return ans;
    }
};