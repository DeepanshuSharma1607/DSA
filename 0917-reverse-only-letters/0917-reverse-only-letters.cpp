class Solution {
public:
    bool alphanumeric(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            return true;
        return false;
    }
    string reverseOnlyLetters(string s) {
        
        int i=0;
        int j=s.size()-1;
        
        while(i<j){
            
            while(i<j && !alphanumeric(s[i])) i++;
            while(i<j && !alphanumeric(s[j])) j--;

            swap(s[i],s[j]);
            i++;
            j--;

        }
        return s;
    }
};