/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// Pattern: Floyd's Cycle Detection (Tortoise & Hare)
// Intuition:
// Move slow by one step and fast by two steps.
// If they ever meet, a cycle exists.
// If fast reaches nullptr, there is no cycle.
//
// Time: O(n) | Space: O(1)
// Key insight:
// In a cycle, the faster pointer eventually catches the slower pointer,
// just like two runners on a circular track.
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*slow=head;
        ListNode*fast=head;
        if(head ==NULL || head->next ==NULL){
            return false;
        }
        while(fast != NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};
