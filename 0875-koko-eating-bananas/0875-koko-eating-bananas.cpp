class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i = 1;
        int j = *max_element(piles.begin(), piles.end());
        int res = j;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            int time = 0;
            for (int x : piles) {
                time += (x + mid - 1) / mid;
                if (time > h)
                    break;
            }
            if (time <= h) {
                j = mid - 1;
                res = mid;
            } else
                i = mid + 1;
        }
        return res;
    }
};