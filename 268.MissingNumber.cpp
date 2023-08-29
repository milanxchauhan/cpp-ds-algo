// Problem - https://leetcode.com/problems/missing-number/
// Runtime: 8 ms
// Memory Usage: 17.92 MB

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            missing ^= i ^ nums[i];
        }
        return missing;
    }
};