class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[arr1[i]]++;
        }
        int j = 0;
        int k = n - 1;
        vector<int> sem;
        for (int i = 0; i < m; i++) {
            while (mpp[arr2[i]] > 0) {
                arr1[j] = arr2[i];
                j++;
                mpp[arr2[i]]--;
            }
            mpp.erase(arr2[i]);
        }
        int start = j;
        for (auto it : mpp) {
            while (it.second > 0) {
                arr1[j] = it.first;
                j++;
                it.second--;
            }
        }
        sort(arr1.begin() + start, arr1.end());
        return arr1;
    }
};