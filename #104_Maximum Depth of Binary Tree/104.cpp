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
    int maxDepth(TreeNode* root) {
        int  depth = 0;
        if(root == NULL)
        {
            return depth;
        }
        else
        {
            int left = maxDepth(root->left);
            int right = maxDepth(root->right);  
            depth = max(left, right) + 1;
        }
        return depth;
    }
};
