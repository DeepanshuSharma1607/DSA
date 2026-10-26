class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        int n = nums1.size();
        int m = nums2.size();
        int i = 0;
        int j = nums1.size();
        int left = (n + m + 1) / 2;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            int cut = left - mid;
            int l1 = (mid==0?INT_MIN:nums1[mid-1]);
            int l2 = (cut==0?INT_MIN:nums2[cut-1]);
            int r1 = (mid==n?INT_MAX:nums1[mid]);
            int r2 = (cut==m?INT_MAX:nums2[cut]);
            if (l1 <= r2 && l2 <= r1) {
                double res = ((double)max(l1, l2) + min(r1, r2)) / 2.0;
                if ((n +m )% 2 == 1)
                    return max(l1, l2);
                else
                    return (double) res;
            } else if (l1 > r2) {
                j = mid - 1;
            } else if (l2 > r1) {
                i = mid + 1;
            }
        }
        return 0.0;
    }
};