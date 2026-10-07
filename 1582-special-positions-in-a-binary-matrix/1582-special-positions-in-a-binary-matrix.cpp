class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int count = 0;
        for(int i=0; i<n; i++){
            int pos=-1;
            int c = 0;
            for(int j=0; j<m; j++){
                if(mat[i][j]==1) {c++; pos=j;}
            }
            if(c==1){
                bool found=false;
                for(int k=0; k<n; k++){
                    if(i!=k && mat[k][pos]==1){
                        found=true;
                        break;
                    }
                }
                if(!found)count++;
            }
        }
        return count;
    }
};