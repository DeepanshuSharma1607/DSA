class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>rev(10e4+2);
        for(int i=0; i<nums.size(); i++){
            int val = abs(nums[i]);
            rev[val]++;
        }
        int j=0;
        for(int i=0; i<=10e4+1; i++){
            while(rev[i]>0){
                nums[j]=i*i;
                rev[i]--;
                j++;   
            }
        }
        return nums;
    }
};