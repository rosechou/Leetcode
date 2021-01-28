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
    
    int pathSum(TreeNode* root, int sum) {
        
        if(root == NULL){return 0;}
        dfs(root, sum);
        pathSum(root->left, sum);
        pathSum(root->right, sum);
        
        return res;
    }
    void dfs(TreeNode* root, int sum){
        if(root!=NULL)
        {
            if(root->val == sum){res++;}
            dfs(root->left, sum-root->val);
            dfs(root->right, sum-root->val);
        }
    }
};
