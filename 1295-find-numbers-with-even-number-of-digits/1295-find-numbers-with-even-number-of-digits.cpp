class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            int val = nums[i];
            // string s = to_string(nums[i]);
            // if(s.size()%2==0) count++;
            int c=0;
            while(val>=0){
                val/=10;
                c++;
            }
            if(c%2==0) count++;
        }
        return count;
    }
};