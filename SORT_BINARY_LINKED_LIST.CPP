https://www.interviewbit.com/problems/sort-binary-linked-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    if(A==NULL||A->next==NULL){
        return A;
    }
    ListNode* count = A;
    ListNode* curr = A;
    while(curr!=NULL){
        if(curr->val == 0){
            //curr pointer swaps when further value is 0.
            //so previous 1 is swapped with this 0.
            swap(curr->val , count->val);
            count = count->next;
            //keeps track of 1 which can be swapped by 0 which are found later.
        }
        curr = curr->next;
        //moving right.
    }
    return A;
}
https://www.youtube.com/watch?v=QngCntiyuCA
