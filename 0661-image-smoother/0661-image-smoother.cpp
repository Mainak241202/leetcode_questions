class Solution {
public:
    int smooth(vector<vector<int>> &img, int x, int y){
        int m = img.size();
        int n = img[0].size();
        int drow[] = {-1,-1,0,+1,+1,+1,0,-1};
        int dcol[] = {0,+1,+1,+1,0,-1,-1,-1};
        int sum=img[x][y],c=1;
        for(int ind = 0;ind<8;ind++){
            int row = x+drow[ind];
            int col = y+dcol[ind];
            if(row>=0 && row<m && col>=0 && col<n){
                sum+=img[row][col];
                c++;
            }
        }
        return sum/(c);
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
       
        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> v(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v[i][j] = smooth(img,i,j);
            }
        }
        return v;
    }
};