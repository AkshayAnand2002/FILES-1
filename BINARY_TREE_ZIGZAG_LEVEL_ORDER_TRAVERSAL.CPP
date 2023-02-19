https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
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
        for(int i=0;i<answer.size();i++){
            if(i%2 !=0){
                reverse(answer[i].begin(),answer[i].end());
            }
        }
        return answer;
    }
};
//1st level order traversal is done then the odd levels of tree are reversed.
//https://www.youtube.com/watch?v=qU_zaA87w5A
