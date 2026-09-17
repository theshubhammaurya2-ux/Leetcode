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
  TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){ TreeNode* temp=new TreeNode(val);root=temp;}

        else if(root->val>val ){
            if(root->left==NULL){
                TreeNode* temp=new TreeNode(val);
                root->left=temp;
            }
            else{ insertIntoBST(root->left,val);}
        }
        else {
            if(root->right==NULL){
                TreeNode* temp=new TreeNode(val);
                root->right=temp;
            }
            else{ insertIntoBST(root->right,val);}
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& pre) {
        TreeNode* root=new TreeNode(pre[0]);
        for(int i=1;i<pre.size();i++){
            insertIntoBST(root,pre[i]);

        }
        return root;
    }
};