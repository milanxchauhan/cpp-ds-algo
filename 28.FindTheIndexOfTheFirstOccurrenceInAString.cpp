// Problem - https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// Runtime: 4 ms
// Memory Usage: 6.26 MB

class Solution {
public:
    int strStr(string haystack, string needle) {
    
    size_t index = haystack.find(needle);

    if (index != string ::npos) {
        cout << "Pattern found at index " << index << endl;
        return index;
    } else {
        cout << "Pattern not found" << endl;
        return -1;
    }  
    
    }
};