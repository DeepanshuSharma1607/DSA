class Solution {
public:
    bool detectCapitalUse(string word) {
        bool is_first_capital = false;
        bool is_sec_capital =
            false;
        if (word[0] >= 'A' && word[0] <= 'Z') is_first_capital = true;
        if (word[1] >= 'A' && word[1] <= 'Z') is_sec_capital = true;
           
        if (is_first_capital && is_sec_capital) {
            for (char ch : word) {
                if (!(ch >= 'A' && ch <= 'Z'))
                    return false;
            }
            return true;
        } 

        else if (is_first_capital && !is_sec_capital) {
            for (int i = 1; i < word.size(); i++) {
                if (!(word[i] >= 'a' && word[i] <= 'z'))
                    return false;
            }
            return true;
        } 
        
         if (!is_first_capital && !is_sec_capital) {
            for (char ch : word) {
                if (!(ch >= 'a' && ch <= 'z'))
                    return false;
            }
            return true;
        }

        return false;
    }
};