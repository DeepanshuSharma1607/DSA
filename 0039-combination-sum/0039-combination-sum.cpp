class Solution {
public:

    void solve(vector<vector<int>>& res , vector<int>& arr , vector<int>& candidates , int target , int sum , int idx){
        if(sum>=target){
            if(sum==target) res.push_back(arr);
        return;
        }
        for(int i=idx; i<candidates.size(); i++){
            arr.push_back(candidates[i]);
            solve(res,arr,candidates,target,sum+candidates[i],i);
            arr.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>arr;
        solve(res,arr,candidates,target,0 , 0);
        return res;
    }
};