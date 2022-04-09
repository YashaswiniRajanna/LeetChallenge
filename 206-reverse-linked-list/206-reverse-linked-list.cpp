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
    ListNode* reverseList(ListNode* head) {
        ListNode*prev=NULL;
        ListNode* cur=head;
        ListNode* nextNode=NULL;
        while(cur!=NULL){
           nextNode=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nextNode;
        }
        return prev;

    }
};