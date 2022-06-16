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
  void  func(TreeNode* root,vector<int> &res) {
        if(root==NULL)
          return;
        func(root->left,res);
        res.push_back(root->val);
        func(root->right,res);
  
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        TreeNode* temp;
        func(root,res);
        return res;
    }
};