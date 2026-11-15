class Solution {
public:
    void solve(int n , int l , int r, string copy, vector<string>&res){
        if(l==r && r==n){
            res.push_back(copy);
            return;
        }
        if(l<n){
            copy.push_back('(');
            solve(n,l+1,r,copy,res);
            copy.pop_back();
        }
        if(r<l){
            copy.push_back(')');
            solve(n,l,r+1,copy,res);
            copy.pop_back();
            }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string copy = "";
        solve(n,0,0,copy,res);
        return res;
    }
};