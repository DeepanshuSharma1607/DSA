class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int i = 0;
        int j = 0;
        while (true) {
            int t = (i - 1 >= 0 ? mat[i - 1][j] : -1);
            int d = (i + 1 < n ? mat[i + 1][j] : -1);
            int l = (j - 1 >= 0 ? mat[i][j - 1] : -1);
            int r = (j + 1 < m ? mat[i][j + 1] : -1);
            int c = mat[i][j];
            if (c > t && c > d && c > l && c > r)
                return {i, j};
            int max_val = max({t, d, l, r});
            if (max_val == t) {
                i -= 1;
            } else if (max_val == d) {
                i += 1;
            } else if (max_val == l) {
                j -= 1;
            } else {
                j += 1;
            }
        }
        return {-1, -1};
    }
};