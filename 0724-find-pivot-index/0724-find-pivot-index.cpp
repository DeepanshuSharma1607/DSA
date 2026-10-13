class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        int curr_sum=0;
        for(int i=0; i<n; i++){
            curr_sum+=nums[i];
            if(sum==curr_sum) return i;
            sum-=nums[i];
        }
        return -1;
    }
};