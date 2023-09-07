// Problem - https://leetcode.com/problems/contains-duplicate/
// Runtime: 105 ms
// Memory Usage: 69.56 MB

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int num : nums){
            if (s.count(num)>0){
                return true;
            }
             s.insert(num);
        }
       return false;
    }
};