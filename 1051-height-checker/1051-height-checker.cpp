class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int>res;
        res=h;
        sort(res.begin(),res.end());
        int count=0;
        for(int i=0; i<h.size(); i++){
            if(h[i]!=res[i]) count++;
        }
        return count;
    }
};