class Solution {
public:
    bool winnerOfGame(string colors) {
        int c1=0,c2 = 0;
        int n = colors.size();
        for(int i=1;i<n-1;i++){
            if(colors[i]=='A' && colors[i-1]=='A' && colors[i+1]=='A'){
                c1++;
            }
            if(colors[i]=='B' && colors[i-1]=='B' && colors[i+1]=='B'){
                c2++;
            }
        }
        if(c1>c2) return true;
        return false;
    }
};