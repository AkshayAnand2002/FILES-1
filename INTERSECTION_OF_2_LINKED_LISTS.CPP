https://leetcode.com/problems/intersection-of-two-linked-lists/description/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int>mp;
        while(headA){
            mp[headA]++;
            headA=headA->next;
        }
        while(headB){
            if(mp[headB]>0){
                return headB;
            }
            headB=headB->next;
        }
        return NULL;
    }
};
