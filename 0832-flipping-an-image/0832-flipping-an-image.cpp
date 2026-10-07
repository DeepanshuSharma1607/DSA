class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for(int i=0; i<n; i++){
            int s=0;
            int e=n-1;
            while(s<=e){
                int temp = image[i][s]^1;
                image[i][s]=image[i][e]^1;
                image[i][e]=temp;
                s++;
                e--;
            }
        }
        return image;
    }
};