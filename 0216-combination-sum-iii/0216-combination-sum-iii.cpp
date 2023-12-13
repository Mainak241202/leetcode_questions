class Solution {
public:
    void getSum(vector<vector<int>> &v,vector<int> &temp,int i,int n,int k){

        if(temp.size()==k){
            if(n==0){
                v.push_back(temp);
            }
            return;
        }
        for(int j=i;j<=9;j++){
            if(j>i && k<0) continue;
            temp.push_back(j);
            getSum(v,temp,j+1,n-j,k);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> v;
        vector<int> temp;
        getSum(v,temp,1,n,k);
        return v;
    }
};