class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        int curr = 0;
        for(int i=1;i<=n;i++){
            if(curr>=target.size()){
                break;
            }
            else if(target[curr]==i){
                res.push_back("Push");
                curr++;
            }
            else{
                res.push_back("Push");
                res.push_back("Pop");
            }
        }
        return res;
    }
};