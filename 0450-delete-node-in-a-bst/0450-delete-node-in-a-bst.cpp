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
        TreeNode* iop(TreeNode*root){
        TreeNode*pred=root->left;
        while(pred->right!=NULL){
            pred=pred->right;
        }
        return pred;
    }

        TreeNode* iosuc(TreeNode*root){
        TreeNode*suc=root->right;
        while(suc->left!=NULL){
            suc=suc->right;
        }
        return suc;
    }

    TreeNode* deleteNode(TreeNode* root, int val) {
     if (root == NULL) return NULL;  
    if(root->val<val){
        root->right= deleteNode(root->right,val);
       }
    else if(root->val>val){
        root->left= deleteNode(root->left,val);
       }
    else{

        if(root->left==NULL && root->right==NULL){
            return NULL;
        }

        if(root->left==NULL || root->right==NULL){
            if(root->left!=NULL) return root->left;
            else return root->right;
        }
        if(root->left!=NULL && root->right!=NULL){

            // replace the deleted node with its inorder precedor/inoreder succeder
            // after replacing 
             TreeNode*  pred=iop(root);
             root->val=pred->val;
             root->left=deleteNode(root->left,pred->val);
         
    }
}
    return root;
        
    }
};