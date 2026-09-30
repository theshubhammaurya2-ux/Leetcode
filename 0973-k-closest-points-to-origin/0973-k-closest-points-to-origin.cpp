class Solution {
public:

 int distance(vector<int> arr) {
        return arr[0] * arr[0] + arr[1] * arr[1];
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>>pq;
        for(int i=0;i<points.size();i++){
            pair<int,vector<int>>pr={distance(points[i]),points[i]};
            pq.push(pr);
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<vector<int>> ans;
        while(!pq.empty()){
           ans.push_back(pq.top().second);
           pq.pop();
        }
    return ans;
    }
};