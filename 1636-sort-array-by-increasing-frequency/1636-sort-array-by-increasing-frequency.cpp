class Solution {
public:

       struct Compare {
        bool operator()(pair<int,int> a, pair<int,int> b) {
            if (a.first != b.first)
                return a.first > b.first;

            return a.second < b.second;
        }
    };



    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }


     priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
           Compare
        > pq;

        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto ele:mp){
            int x=ele.second;
            int y=ele.first;
            pair<int,int> p={x,y};
            pq.push(p);
        }
         while(!pq.empty()){
            int freq=pq.top().first;
            int val=pq.top().second;
            for(int i=0;i<freq;i++){
                ans.push_back(val);
            }
            pq.pop();
         }
    return ans;
  
    }
};