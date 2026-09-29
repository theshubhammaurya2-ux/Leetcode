class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int g=matrix.size();
        vector<int> ans;
        for(int i=0;i<g;i++){
             for(int j=0;j<matrix[i].size();j++){
                ans.push_back(matrix[i][j]);
             }
        }
    
        int n=ans.size();
         priority_queue<int>pq;
         for(int i=0;i<n;i++){
            pq.push(ans[i]);
            if(pq.size()>k){
                
                pq.pop();
            }
         }
         return pq.top();
    }
};