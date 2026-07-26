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
// Pattern: Fast & Slow Pointers + Circular Linked List
// Intuition:
// Find the length of the list.
// Connect the tail to the head to form a circle.
// Move to the new tail (length - k % length - 1 steps) and break the circle.
//
// Time: O(n) | Space: O(1)
// Key insight:
// Rotating right by k is equivalent to rotating by k % length.
// Making the list circular eliminates complicated pointer shifting.
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL||k==0){
            return head;
        }
        ListNode*last=head;
        int len=1;
        while(last->next != NULL){
            last=last->next;
            len++;
        }
        k=k%len;
        if(k==0){
            return head;
        }
        last->next=head;
        ListNode*newtail=head;
        for(int i=0;i<len-k-1;i++){
            newtail=newtail->next;
        }
        ListNode*newhead=newtail->next;
        newtail->next=NULL;
        return newhead;
    }
};
