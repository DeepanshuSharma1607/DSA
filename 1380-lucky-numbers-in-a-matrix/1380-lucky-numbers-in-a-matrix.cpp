class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        // unordered_map<int, int> mpp;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>res;
        for (int i = 0; i < n; i++) {
            int min_ele = INT_MAX;
            int pos = -1;
            for (int j = 0; j < m; j++) {
                if (min_ele > matrix[i][j]) {
                    min_ele = matrix[i][j];
                    pos = j;
                }
            }
            int max_ele=INT_MIN;
            for (int k = 0; k < n; k++) {
                max_ele = max(max_ele, matrix[k][pos]);
            }
            if (max_ele == min_ele) {
                res.push_back(min_ele);
            }
        }
        return res;
    }
};