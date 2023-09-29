//Multi-Source BFS question

class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 || j==0 || i==n-1 || j==m-1) && grid[i][j]==1){
                    q.push({i,j});
                    vis[i][j] = 1;
                }
            }
        }
        int drow[] = {-1,0,+1,0};
        int dcol[] = {0,+1,0,-1};
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for(int i=0;i<4;i++){
                int nr = r + drow[i];
                int nc = c + dcol[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 && vis[nr][nc]==0){
                    q.push({nr,nc});
                    vis[nr][nc] = 1;
                }
            }
        }
        int c = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]==1){
                    c++;
                }
            }
        }
        return c;
    }
};