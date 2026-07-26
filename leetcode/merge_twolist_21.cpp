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
// Pattern: Two Pointers + Dummy Node
// Intuition:
// Compare the current nodes of both sorted lists.
// Attach the smaller node to the answer and move that pointer.
// Continue until one list ends, then attach the remaining nodes.
//
// Time: O(n + m) | Space: O(1)
// Key insight:
// Since both lists are already sorted, a single linear pass is enough.
// A dummy node avoids handling the head as a special case.
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(-1);
        ListNode*tail=&dummy;
        while(list1!=nullptr && list2!= nullptr){
            if(list1->val <= list2->val){
                tail->next=list1;
                list1=list1->next;
            }else{
                tail->next=list2;
                list2=list2->next;
            }
            tail=tail->next;
        }
        if(list1!=nullptr){
            tail->next=list1;
        }else{
            tail->next=list2;
        }
        return dummy.next;
    }
};
