class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int> (n, 0));
        
        int left = 0, right = matrix[0].size() - 1, top = 0, bottom = matrix.size()- 1;
        int count = 1;
        while (left <= right && top <= bottom) {
            for (int i = left; i <= right; i++) {
                matrix[top][i] = count;
                count++;
            }
            top++;
            
            for (int i = top; i <= bottom; i++) {
                matrix[i][right] = count;
                count++;
            }
            right--;
            
            for (int i = right; top <= bottom && i >= left; i--) {
                matrix[bottom][i] = count;
                count++;
            }
            bottom--;
            
            for (int i = bottom; left <= right && i >= top; i--) {
                matrix[i][left] = count;
                count++;
            }
            left++;
        }
        return matrix;
    }
};
