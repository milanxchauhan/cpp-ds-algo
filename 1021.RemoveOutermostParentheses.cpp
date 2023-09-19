// Problem - https://leetcode.com/problems/remove-outermost-parentheses/
// Runtime: 4 ms
// Memory Usage: 7.10 MB

class Solution {
public:
    string removeOuterParentheses(string S) {
        string result = "";
        int opened = 0;

        for (char c : S) {
            if (c == '(') {
                if (opened > 0) {
                    result += c;
                }
                opened++;
            } else if (c == ')') {
                opened--;
                if (opened > 0) {
                    result += c;
                }
            }
        }

        return result;
    }
};