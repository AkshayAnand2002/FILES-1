https://leetcode.com/problems/linked-list-cycle/description/
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
    bool hasCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        //below for edge cases
        if(head==NULL || head->next==NULL){
            return false;
        }
        while(slow!=NULL && fast != NULL){
            fast=fast->next;
            if(fast != NULL){
                fast=fast->next;
            }
            slow=slow->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};
/*
Approach---
This is the Floyd Loop Detection Algorithm
It is a Two Pointers approach
We take 2 pointers, a fast pointer that takes 2 steps at a time and a slow pointer that takes 1 step at a time
If there is no loop in the list, then the loop breaks when fast pointer reaches the end of the linked list
However, if there is a loop in the list then at when both slow and fast pointer are looping in the list, at one point of time they coincide.
We use this condition to check if loop exists or not.
Complexity---
Time complexity:O(n)
Space complexity:O(1)
*/
