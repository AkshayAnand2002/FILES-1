https://leetcode.com/problems/reverse-linked-list/description/
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
        if(head==NULL){
            return head;
        }
        ListNode* current=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(current != NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        return prev;
        //next to current->next to prev to current to next.
        //At last return previous.
    }
};
