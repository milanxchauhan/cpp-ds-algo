// Problem - https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
// Runtime: 4 ms
// Memory Usage: 8.26 MB

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int decimal = 0;

        while (head != nullptr) {
            decimal = (decimal << 1) + head->val; 
            head = head->next;
        }

        return decimal;
    }
};