class Solution {
public:
    bool is_vowel(char ch){
        ch=tolower(ch);
        char c[5]={'a','e','i','o','u'};
        for(char a : c){
            if(ch==a) return true;
        }
        return false;
    }
    string toGoatLatin(string s) {
        string res="";
        int n = s.size();
        int i=0;
        int count=1;
        while(i<n){
            int k=i;
            char first;
            if(!is_vowel(s[k])){
                first = s[k];
                k++;
            }
            while(k<n && s[k]!=' '){
                res+=s[k];
                k++;
            }
            if(!is_vowel(s[i])) res+=first;
            res+="ma";
            res+=string(count,'a');
            res+=' ';
            count++;
            i=k+1;
        }
        return res.substr(0,res.size()-1);
    }
};