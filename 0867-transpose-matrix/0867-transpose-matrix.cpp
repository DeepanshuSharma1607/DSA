class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        if (n == m) {
            int i = 0;
            int y = 0;
            while (i < n && y < m) {
                int j = i + 1;
                int x = y + 1;
                while (j < m && x < n) {
                    swap(matrix[i][j], matrix[x][y]);
                    j++;
                    x++;
                }
                i++;
                y++;
            }
            return matrix;
        }
        vector<vector<int>>mat(m,vector<int>(n));
       for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            mat[i][j]=matrix[j][i];
        }
       }
        return mat;
    }
};