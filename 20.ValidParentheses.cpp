// Problem - https://leetcode.com/problems/valid-parentheses/
// Runtime: 0 ms
// Memory Usage: 6.57 MB

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        std::unordered_map<char, char> mappings = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else if (c == ')' || c == '}' || c == ']') {
                if (st.empty() || st.top() != mappings[c]) {
                    return false;
                }
                st.pop();
            }
        }

        return st.empty();
    }
};