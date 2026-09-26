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
      TreeNode* first=NULL;
    void find(TreeNode*root,int start){
        if(root==NULL){ return;}
        if(root->val==start){first=root; return;}
        find(root->left,start);
        find(root->right,start);
    }
    
    void markparent(TreeNode*root,unordered_map<TreeNode*,TreeNode*>&parent){
        if(root==NULL) return ;
        if(root->left){parent[root->left]=root;}
         if(root->right){parent[root->right]=root;}
        markparent(root->left,parent);
        markparent(root->right,parent);
    }

    int amountOfTime(TreeNode* root, int start) {
        find(root,start);
        unordered_map<TreeNode*,TreeNode*>parent;
        markparent(root,parent);
        unordered_set<TreeNode*>infected;
        infected.insert(first);
        queue<pair<TreeNode*,int>>q; //root,levels
        q.push({first,0});
        int maxlevel=0;
        while(q.size()>0){
                pair<TreeNode*,int>p=q.front();
                 q.pop();
              int level=p.second;
              maxlevel=max(maxlevel,level);
              TreeNode* temp=p.first;
              if(temp->left){
                if(infected.find(temp->left)==infected.end()){
                    q.push({temp->left,level+1});
                    infected.insert(temp->left);
              }  
            }
              if(temp->right){
                if(infected.find(temp->right)==infected.end()){
                    q.push({temp->right,level+1});
                    infected.insert(temp->right);
                }
              }
             if(parent.find(temp)!=parent.end()){
                if(infected.find(parent[temp])==infected.end()){
                    q.push({parent[temp],level+1});
                    infected.insert(parent[temp]);
                }
             }
            }
            return maxlevel;
        

    }
};