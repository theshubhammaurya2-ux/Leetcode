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
vector<TreeNode*> preorder(TreeNode* root,vector<TreeNode*>&ans){
    
    if(root==NULL) return ans ;
    ans.push_back(root);   
    preorder(root->left,ans);
    preorder(root->right,ans);
return ans;
}
    void flatten(TreeNode* root) {
        vector<TreeNode*>ans1;
        vector<TreeNode*> ans=preorder(root,ans1);
        int n= ans.size();
        for(int i=0;i<n-1;i++){
           ans[i]->right=ans[i+1];
           ans[i]->left=NULL;
        }
    }
};