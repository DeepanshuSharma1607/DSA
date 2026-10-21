class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        int i=0;
        while(i<n){
            bool found = true;
            int pos=i;
            for(int k=0; k<m; k++){
                if(haystack[i+k]!=needle[k]){
                    found=false;
                    break;
                }
            }
            if(found){
                return pos;
            }
            i++;
        }
    return -1;
    }
};