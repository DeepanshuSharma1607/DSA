class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(char ch:s){
            if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
                a+=tolower(ch);
            }
        }
        int i=0; 
        int j=a.size()-1;
        while(i<j){
            if(a[i]!=a[j]) return false;
            i++;
            j--;
        }
    return true;
    }
};