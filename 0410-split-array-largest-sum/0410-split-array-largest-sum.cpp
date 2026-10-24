class Solution {
public:
    bool subarray_upto_k(int sum, vector<int>& nums, int k) {
        int n = nums.size();
        int sub_arr = 1;
        int curr_sub_sum = 0;
        for (int i = 0; i < n; i++) {
            if (sub_arr > k)
                return false;
            if (curr_sub_sum +nums[i] <= sum) {
                curr_sub_sum += nums[i];
            } else {
                curr_sub_sum = nums[i];
                sub_arr++;
            }
        }
        return sub_arr <= k ? true : false;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int res = INT_MAX;
        int i = *max_element(nums.begin(), nums.end());
        int j = accumulate(nums.begin(), nums.end(), 0);
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (subarray_upto_k(mid, nums, k)) {
                res = mid;
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return res;
    }
};