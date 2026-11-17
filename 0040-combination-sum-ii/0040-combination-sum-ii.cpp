class Solution {
public:
    void solve(int idx , vector<int>& candidates, int target , vector<vector<int>>&res , vector<int>& arr){
        if(target == 0) {res.push_back(arr); return;}
        if(target<0) return;
        for(int i = idx; i<candidates.size(); i++){
            if(i>idx && candidates[i-1]==candidates[i]) continue;
            if(candidates[i]>target) break;
            arr.push_back(candidates[i]);
            solve(i+1,candidates,target-candidates[i],res,arr);
            arr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int>arr;
        solve(0,candidates,target,res,arr);
        return res;
    }
};