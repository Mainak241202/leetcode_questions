class Solution {
public:
    void generate(vector<vector<int>> &v,vector<int> &temp,int i,int n,int k){
        if(k==temp.size()){
            v.push_back(temp);
            return;
        }
        for(int j=i;j<=n;j++){
            temp.push_back(j);
            generate(v,temp,j+1,n,k);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> v;
        vector<int> temp;
        generate(v,temp,1,n,k);
        return v;
    }
};