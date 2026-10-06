class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        while(i<n){
            int corr_pos = nums[i]-1;
            if(nums[i]!=nums[corr_pos]){
                swap(nums[i],nums[corr_pos]);
            }
            else{
                i++;
            }
        }
        vector<int>res;
        for(i=0; i<n; i++){
            if(i+1!=nums[i]) res.push_back(i+1);
        }
        return res;
    }
};