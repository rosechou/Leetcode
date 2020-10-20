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
    int height(TreeNode* root){
        int depth;
        if(root == NULL)
        {
            return depth; 
        }
        else
        {
            int left = height(root->left);
            int right = height(root->right);
            depth = max(left,right)+1;
            return depth;
        }
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
        {
            return true;
        }
        else
        {
            bool l = isBalanced(root->left);
            bool r = isBalanced(root->right);
            if((l & r) == false)
            {
                return false;
            }
            int left = height(root->left);
            int right = height(root->right);
            if(abs(left-right)<2)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};
