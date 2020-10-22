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
    int res = 0;
    int LongestPath(TreeNode* root)
    {
        if (root == NULL)
        {
            return -1;
        }
        
        int l = LongestPath(root->left)+1;
        int r = LongestPath(root->right)+1;
        int longest = l + r;
        res = max(res, longest);
        return max(l,r);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        LongestPath(root);
        return res;   
    }
};
