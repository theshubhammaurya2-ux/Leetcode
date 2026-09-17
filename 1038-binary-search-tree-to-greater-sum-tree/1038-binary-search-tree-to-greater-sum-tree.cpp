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
   int sum=0;
  void inorderrev(TreeNode* root){
    if(root==NULL) return;
    inorderrev(root->right);
    root->val+=sum;
    sum=root->val;
    inorderrev(root->left);
  }
    TreeNode* bstToGst(TreeNode* root) {
        inorderrev(root);
        return root;
    }
};