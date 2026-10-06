class Solution {
public:
    bool alphanumeric(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9'))
            return true;
        return false;
    }
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i <= j) {

            while (i < j && !alphanumeric(s[i]))
                i++;
            while (i < j && !alphanumeric(s[j]))
                j--;

            char a = tolower(s[i]);
            char b = tolower(s[j]);

            if (a != b)
                return false;
            i++;
            j--;
        }
        return true;
    }
};