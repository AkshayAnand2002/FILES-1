https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums, 0, nums.size()-1);
    }
    TreeNode* helper(vector<int>& nums, int left, int right){   
        //base case
        //If the left pointer crosses right return null;
        if(left > right){
            return NULL;
        }
        // as middle of the array will be the root node
        int mid = (left + right) / 2;
        TreeNode* temp = new TreeNode(nums[mid]);
        //left part from middle will be left subtree
        temp->left = helper(nums, left, mid-1);
        //right part of array will be right subtree
        temp->right = helper(nums, mid+1 , right);
        return temp;
    }
};
//https://www.youtube.com/watch?v=KEyRLtBfbLk&t=528s
//approach is we take root as middle and set elems on left and right by binary
//search such that they are height balanced.
//Binary Search Approach.
