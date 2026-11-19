class Solution {
public:
    bool isValid(string s) {
        stack<char> st1;
        stack<char> st2;
        if(s.size()<2) return false;
        for (char ch : s) {
            st1.push(ch);
        }
        while (!st1.empty()) {
            char curr = st1.top();
            if (st1.top() == ')' || st1.top() == ']' || st1.top() == '}') {
                st2.push(st1.top());
            } else {
                if (!st2.empty() && ((curr == '(' && st2.top() == ')') ||
                    (curr == '[' && st2.top() == ']') ||
                    (curr == '{' && st2.top() == '}'))) {
                    st2.pop();
                } else
                    return false;
            }
            st1.pop();
        }
        return st2.empty();
    }
};