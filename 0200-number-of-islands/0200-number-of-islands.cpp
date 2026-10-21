class Solution {
public:
    void dfs(int i, int j, vector<vector<bool>>& vis,
             vector<vector<char>>& grid, int row[], int col[]) {
        vis[i][j] = 1;
        for (int k = 0; k < 4; k++) {
            int nr = i + row[k];
            int nc = j + col[k];
            if (nc >= 0 && nr >= 0 && nc < grid[0].size() && nr < grid.size() &&
                grid[nr][nc] == '1' && !vis[nr][nc]) {
                dfs(nr, nc, vis, grid, row, col);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int row[] = {-1, 0, 1, 0};
        int col[] = {0, 1, 0, -1};
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    dfs(i, j, vis, grid, row, col);
                    count++;
                }
            }
        }
        return count;
    }
};