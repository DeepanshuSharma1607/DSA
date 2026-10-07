class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        unordered_map<int, int> mpp;
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++) {
            int min_ele = INT_MAX;
            int pos = -1;
            for (int j = 0; j < m; j++) {
                if (min_ele > matrix[i][j]) {
                    min_ele = matrix[i][j];
                    pos = j;
                }
            }
            if (min_ele != INT_MAX || pos != -1) {
                mpp[min_ele] = pos;
            }
        }
        vector<int> res;
        for (auto it : mpp) {
            int val = it.first;
            int pos = it.second;
            int max_ele = INT_MIN;
            for (int i = 0; i < n; i++) {
                max_ele = max(max_ele, matrix[i][pos]);
            }
            if (max_ele == val) {
                res.push_back(val);
            }
        }
        return res;
    }
};