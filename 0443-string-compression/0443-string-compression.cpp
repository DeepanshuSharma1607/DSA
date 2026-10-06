class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        string res = "";
        int j = 1;

        while (i < chars.size()) {
            char c = chars[i];
            if (i != 0) {
                chars[j] = c;
                j++;
            }
            int count = 0;
            while (i < chars.size() - 1 && c == chars[i + 1]) {
                count++;
                i++;
            }
            if (count != 0) {
                string s = to_string(count + 1);
                for (char ch : s) {
                    chars[j] = ch;
                    j++;
                }
            }
            i++;
        }

        return j;
    }
};