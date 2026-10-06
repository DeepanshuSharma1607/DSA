class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0;
        int j = 0;
        while (i < name.size()) {
            if (j == typed.size() || typed[j] != name[i])
                return false;
            j++;
            if (i == name.size() - 1 || name[i] != name[i + 1])
                while (j < typed.size() && typed[j] == name[i])
                    j++;
            i++;
        }
        return j == typed.size();
    }
};