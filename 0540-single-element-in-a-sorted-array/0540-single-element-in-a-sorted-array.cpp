class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        if (n == 1)
            return arr[0];
        int st = 0;
        int end = arr.size() - 1;
        if (arr[st] != arr[st + 1])
            return arr[st];
        if (arr[end] != arr[end - 1])
            return arr[end];
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (mid > 0 && mid < n - 1 && arr[mid] != arr[mid + 1] &&
                arr[mid] != arr[mid - 1])
                return arr[mid];
            if (mid % 2 == 0) {
                if (arr[mid] != arr[mid + 1])
                    end = mid - 1;
                else
                    st = mid + 1;
            } else {
                if (arr[mid] == arr[mid + 1])
                    end = mid - 1;
                else
                    st = mid + 1;
            }
        }
        return -1;
    }
};