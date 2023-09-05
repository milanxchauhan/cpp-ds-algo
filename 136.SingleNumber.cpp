// Problem - https://leetcode.com/problems/single-number/
// Runtime: 4 ms
// Memory Usage: 17.03 MB

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int it : nums)
        {
            result ^= it; 
        }
        return result;
    }
};