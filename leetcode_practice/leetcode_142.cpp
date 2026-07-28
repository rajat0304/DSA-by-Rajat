/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//Pattern: Fast & Slow Pointers  also known as Floyd's Cycle Detection
//Intuition:The fast pointer travels exactly twice the distance of the slow pointer. The extra distance covered by the fast pointer must therefore be a whole number of cycle lengths. This creates the relationship that the distance from the head to the cycle entry equals the remaining distance from the meeting point to the cycle entry, modulo full cycles. That's why resetting one pointer to the head and moving both one step at a time makes them meet at the cycle start.
//Time: O(N) | Space: O(1)
// Key insight:
// After slow and fast meet inside the cycle, move one pointer back to the head.
// Then advance both pointers one step at a time; they will meet again exactly
// at the cycle's starting node because the distance from head to the cycle start
// equals the distance from the meeting point to the cycle start (modulo the cycle length).
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast !=NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                ListNode *ptr=head;
                while(ptr !=slow){
                    ptr=ptr->next;
                    slow=slow->next;
                }
                return ptr;
            }
        }
        return nullptr; 
    }
};
