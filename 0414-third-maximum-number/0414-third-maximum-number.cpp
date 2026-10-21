class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int maxnum = *max_element(nums.begin(), nums.end());
        if (nums.size() < 3)
            return maxnum;
        int sec_max = INT_MIN;
        for (int x : nums) {
            if (x < maxnum) {
                sec_max = max(sec_max, x);
            }
        }
        int ans = INT_MIN;
        bool is_min = false;
        for (int x : nums) {
            if (x < sec_max) {
                if (x == INT_MIN)
                    is_min = true;
                ans = max(ans, x);
            }
        }
        if (ans == INT_MIN && !is_min)
            return maxnum;
        if (is_min)
            return INT_MIN;
        return ans;
    }
};