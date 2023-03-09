https://www.youtube.com/watch?v=XBq5Chru1UQ
https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val==p->val || root->val==q->val){
            return root;
            //if root is one of p or q.
        }
        TreeNode* a=NULL,*b=NULL;
        if(root->left != NULL){
            a=lowestCommonAncestor(root->left,p,q);
            //left call for checking node in left subtree
        }
        if(root->right != NULL){
            b=lowestCommonAncestor(root->right,p,q);
            //right call for checking node in right subtree
        }
        if(a==NULL && b==NULL){
            return NULL;
            //values p and q not found in tree.
        }
        if(a!=NULL && b==NULL){
            return a;
            //case when both p and q belong to left subtree
        }
        if(a==NULL && b!=NULL){
            return b;
            //case when both p and q belong to right subtree
        }
        if(a!=NULL && b!=NULL){
            return root;
            //both p and q belong to different subtrees hence common ancestor is the root.
        }
        return root;
    }
};
