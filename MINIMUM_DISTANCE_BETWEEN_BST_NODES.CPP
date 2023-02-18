https://leetcode.com/problems/minimum-distance-between-bst-nodes/description/
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
    void inorderhelp(TreeNode* root,vector<int>&x){
        if(root==NULL){
            return;
        }
        inorderhelp(root->left,x);
        x.push_back(root->val);
        inorderhelp(root->right,x);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int>x;
        inorderhelp(root,x);
        int answer=INT_MAX;
        for(int i=1;i<x.size();i++){
            answer=min(x[i]-x[i-1],answer);
        }
        return answer;
    }
};
