// Time: O(n)
// Space: O(n)

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
        vector<vector<int>> result ;
        if (!root) return result ;
        
        queue<TreeNode *> q ;
        TreeNode *tmp;
        
        q.push(root) ;
        while (! q.empty() ){
            vector<int> v ;
            int len = q.size() ; //how many nodes in the queue
            
            for (int i=0; i<len; i++){
                tmp = q.front() ;
                q.pop();
                v.push_back(tmp->val) ;
                
                if (tmp->left) q.push(tmp->left) ;
                if (tmp->right) q.push(tmp->right) ;
            }
            result.push_back(v);
        }
        
        return result ;
    }
};
	
