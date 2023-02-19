https://leetcode.com/problems/binary-tree-level-order-traversal/description/
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>answer;
        queue<TreeNode*>q;
        if(root==NULL){
            return answer;
        }
        q.push(root);
        bool flag=false;
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode* temp =q.front();
                level.push_back(temp->val);
                q.pop();
                if(temp->left != NULL){
                    q.push(temp->left);
                }
                if(temp->right != NULL){
                    q.push(temp->right);
                }
            }
            answer.push_back(level);
            //level order traversal
        }
        return answer;
    }
};
//https://www.youtube.com/watch?v=qU_zaA87w5A
