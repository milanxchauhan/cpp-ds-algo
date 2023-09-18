// Problem - https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
// Runtime: 0 ms
// Memory Usage: 6.74 MB

class Solution {
public:
    int maxDepth(string s) {
    int maxDepth = 0;
    int currentDepth = 0;
    
    for (char c : s) {
        if (c == '(') {
            currentDepth++;
            maxDepth = max(maxDepth, currentDepth);
        } else if (c == ')') {
            currentDepth--;
        }
    }
    
    return maxDepth;
    }
};