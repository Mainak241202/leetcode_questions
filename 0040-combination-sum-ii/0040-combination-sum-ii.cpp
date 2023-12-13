class Solution {
public:
    void findSum(vector<vector<int>> &v,vector<int> &temp,int i,int target,vector<int> &candidates){
        if(target==0){
            v.push_back(temp);
            return;
        }
        
        for(int j=i;j<candidates.size();j++){
            if(j>i && candidates[j]==candidates[j-1]) continue;
            if(candidates[j]>target) break;
            temp.push_back(candidates[j]);
            findSum(v,temp,j+1,target-candidates[j],candidates);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> v;
        vector<int> temp;
        findSum(v,temp,0,target,candidates);
        return v;
    }
};