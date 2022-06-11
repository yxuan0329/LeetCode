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
    int maxSum = INT_MIN ;
    int maxGain(TreeNode* root){
        if (! root) return 0;
        int l = max (maxGain(root->left), 0);
        int r = max (maxGain(root->right), 0);
        int newSum = root->val + l + r ;
        maxSum = max (maxSum, newSum) ;
        return root->val + max(l, r) ; // maximum path sum from the root
    }
    int maxPathSum(TreeNode* root) {
        maxGain(root);
        return maxSum ;
    }
};
