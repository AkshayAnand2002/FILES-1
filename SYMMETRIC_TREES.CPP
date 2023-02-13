https://leetcode.com/problems/symmetric-tree/description/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool issame(TreeNode* t1,TreeNode* t2){
        if(!t1 && !t2){
            return true;
        }
        if(t1 && !t2){
            return false;
        }
        if(!t1 && t2){
            return false;
        }
        if(t1->val==t2->val){
            return issame(t1->left,t2->right) && issame(t1->right,t2->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return issame(root->left,root->right);
    }
};
