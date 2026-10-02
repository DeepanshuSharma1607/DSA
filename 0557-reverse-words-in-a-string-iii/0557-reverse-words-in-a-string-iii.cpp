class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int space = 0;
        for (int j = 0; j < s.size(); j++) {
            if (j==s.size()-1 || s[j] == ' ') {
                int k = j - 1;
                if(j==s.size()-1) k=j;
                while (i <= k) {
                    swap(s[i], s[k]);
                    i++;
                    k--;
                }
                i = j + 1;
                space++;
            }
        }

        if (space == 0) {
            i = 0;
            int k = s.size() - 1;
            while (i < k) {
                swap(s[i], s[k]);
                i++;
                k--;
            }
        }
        return s;
    }
};