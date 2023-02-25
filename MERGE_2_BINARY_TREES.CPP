https://leetcode.com/problems/merge-two-binary-trees/description/
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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(!t1){
            return t2;
            //if one of them is null
            //simple add with 0.
        }
        if(!t2){
            return t1;
        }
        t1->val += t2->val;//adding
        t1->left=mergeTrees(t1->left,t2->left);
        //t1 is being made as merged tree.
        t1->right=mergeTrees(t1->right,t2->right);
        return t1;
    }
};
