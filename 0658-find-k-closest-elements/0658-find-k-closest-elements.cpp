class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
           vector<int> ans;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<arr.size();i++){
            pair<int,int>pr={abs(x-arr[i]),arr[i]};
            pq.push(pr);
            if(pq.size()>k){
                 pq.pop();
            }
         
        }

        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};