class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int m) {
        int n = f.size();
        for(int i=0; i<n; i++){
            if(f[i]==1) continue;
            if(i-1>=0 && f[i-1]==1)continue;
            if(i+1<n && f[i+1]==1) continue;
            f[i]=1;
            m--;
        }
        return m<=0;
    }
};