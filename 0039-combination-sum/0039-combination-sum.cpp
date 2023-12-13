class Solution {
public:
    void findSum(vector<vector<int>> &v,vector<int> &temp,int i,int target,vector<int> &candidates){
        if(i==candidates.size()){
            if(target==0){
                v.push_back(temp);
            }
            return;
        }
        if(candidates[i]<=target){
            temp.push_back(candidates[i]);
            findSum(v,temp,i,target-candidates[i],candidates);
            temp.pop_back();
        }
        findSum(v,temp,i+1,target,candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> temp;
        findSum(v,temp,0,target,candidates);
        return v;
    }
};