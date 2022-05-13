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
    bool isSymmetric(TreeNode* root) {
        if (!root) return true; // empty tree
        return checkSymmetric(root->left, root->right);
    }
    bool checkSymmetric(TreeNode* leftChild, TreeNode* rightChild){
        if (!leftChild && !rightChild)
            return true;
        else if (!leftChild || !rightChild)
            return false;
        else if (leftChild->val != rightChild->val) // different value
            return false;
        else
            return checkSymmetric(leftChild->left, rightChild->right) && checkSymmetric(leftChild->right, rightChild->left);
    }
};
