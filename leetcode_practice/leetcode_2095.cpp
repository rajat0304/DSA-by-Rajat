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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next==nullptr){
            return NULL;
        }
        int len=0;
        ListNode*temp=head;
        while(temp !=nullptr){
            len++;
            temp=temp->next;
        }
        int mid=len/2;
        ListNode*curr=head;
        for(int i=0;i<mid-1;i++){
            curr=curr->next;
        }
        curr->next=curr->next->next;
        return head;
    }
};
