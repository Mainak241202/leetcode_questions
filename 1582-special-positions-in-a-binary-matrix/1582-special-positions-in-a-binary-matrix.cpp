class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> rowSum(mat.size(),0);
        vector<int> colSum(mat[0].size(),0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                rowSum[i]+=mat[i][j];
                colSum[j]+=mat[i][j];
            }
        }
        int c = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1 && rowSum[i]==1 && colSum[j]==1){
                    c++;
                }
            }
        }
        return c;
    }
};