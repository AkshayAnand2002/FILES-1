https://leetcode.com/problems/swap-nodes-in-pairs/description/
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* current=head;
        ListNode* next=NULL;
        ListNode* previous=NULL;
        int count=0;
        while(current !=NULL && count<2){
            next=current->next;
            current->next=previous;
            previous=current;
            current=next;
            count++;
        }//2 adjacent nodes reversed.
        if(next != NULL){
            head->next=swapPairs(next);
            //moving to next node for reversing after previous 2 nodes are reversed.
        }
        return previous;
        //as was done in case of reverse linked list 
        //as previous points to head.
    }
};
//https://www.youtube.com/watch?v=DCCBR--V5AA
