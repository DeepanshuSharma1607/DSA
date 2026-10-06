class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        int right =  0;
        for(int i=0; i<n; i++){
            int val = sum-nums[i];
            if(val==right) return i;
            right+=nums[i];
            sum-=nums[i];
        }
        return -1;
    }
};