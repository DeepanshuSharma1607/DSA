class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int m = strs.size();
        sort(strs.begin(),strs.end());
        int n = max(strs[0].size(),strs[m-1].size());
        string res="";
        for(int i=0;i<n; i++){
            if(strs[0][i]==strs[m-1][i]) res+=strs[0][i];
            else break;
        }
        return res;
    }
};