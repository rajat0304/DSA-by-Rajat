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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        int len=0;
        while(temp != nullptr){
            len++;
            temp=temp->next;
        }
        if(len == n){
            return head->next;
        }
        int target = len-n-1;
        ListNode*curr=head;
        while(target--){
            curr=curr->next;
        }
        curr->next=curr->next->next;
        return head;
    }
};
