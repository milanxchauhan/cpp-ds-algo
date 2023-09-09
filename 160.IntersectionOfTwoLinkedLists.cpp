// Problem - https://leetcode.com/problems/intersection-of-two-linked-lists/
// Runtime: 36 ms
// Memory Usage: 14.57 MB

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode * headA, ListNode * headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr; 
        }

        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;

        while (ptr1 != ptr2) {
            ptr1 = (ptr1 == nullptr) ? headB : ptr1->next;
            ptr2 = (ptr2 == nullptr) ? headA : ptr2->next;
        }

        return ptr1;
    }
};