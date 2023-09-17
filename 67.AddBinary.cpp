// Problem - https://leetcode.com/problems/add-binary/
// Runtime: 0 ms
// Memory Usage: 6.85 MB

class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int carry = 0;
        for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0; i--, j--) {
            int x = i >= 0 ? a[i] - '0' : 0;
            int y = j >= 0 ? b[j] - '0' : 0;
            int sum = x + y + carry;
            carry = sum / 2;
            ans.push_back(sum % 2 + '0');
        }
        if (carry) ans.push_back(carry + '0');
        reverse(ans.begin(), ans.end());
        return ans;    
    }
};