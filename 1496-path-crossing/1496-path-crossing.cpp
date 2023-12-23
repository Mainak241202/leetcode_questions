class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> st;
        int x=0,y=0;
        st.insert({0,0});
        for(char dir: path){
            if(dir=='N') y++;
            else if(dir=='E') x++;
            else if(dir=='S') y--;
            else x--;

            if(st.find({x,y})!=st.end()){
                return true;
            }
            st.insert({x,y});
        }
        return false;
    }
};