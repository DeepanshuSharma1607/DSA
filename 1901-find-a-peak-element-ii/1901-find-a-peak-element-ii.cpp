class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        // int i = 0;
        // int j = 0;
        // while (true) {
        //     int t = (i - 1 >= 0 ? mat[i - 1][j] : -1);
        //     int d = (i + 1 < n ? mat[i + 1][j] : -1);
        //     int l = (j - 1 >= 0 ? mat[i][j - 1] : -1);
        //     int r = (j + 1 < m ? mat[i][j + 1] : -1);
        //     int c = mat[i][j];
        //     if (c > t && c > d && c > l && c > r)
        //         return {i, j};
        //     int max_val = max({t, d, l, r});
        //     if (max_val == t) {
        //         i -= 1;
        //     } else if (max_val == d) {
        //         i += 1;
        //     } else if (max_val == l) {
        //         j -= 1;
        //     } else {
        //         j += 1;
        //     }
        // }
        // return {-1, -1};

        int i = 0;
        int j = m - 1;

        while (i <= j) {
            int mid = i + (j - i) / 2;
            int max_col = 0;
            for (int k = 1; k < n; k++) {
                if (mat[mid][k] > mat[mid][max_col]) {
                    max_col = k;
                }
            }
            int l = (mid - 1 >= 0 ? mat[mid - 1][max_col] : -1);
            int r = (mid + 1 < m ? mat[mid + 1][max_col] : -1);
            int c = mat[mid][max_col];

            if (l < c && r < c)
                return {mid, max_col};
            else if (l > c)
                j = mid - 1; 
            else
                i = mid + 1; 
        }

        return {-1, -1};
    }
};