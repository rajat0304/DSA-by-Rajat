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
// Pattern: Fast & Slow Pointers
// Intuition:
// Move slow one step and fast two steps.
// When fast reaches the end, slow will be at the middle.
//
// Time: O(n) | Space: O(1)
// Key insight:
// Fast travels twice as quickly as slow, so when fast completes the list,
// slow has covered exactly half the distance.
// For even-length lists, this naturally returns the second middle.
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head == nullptr || head->next==nullptr){
            return head;
        }
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
