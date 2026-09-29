class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();

        // map pair ele,freq
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        } 
        
        // heap pair (freq,pair) pair<int,int> in pace of int
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> mpq;
        for(auto ele:mp){
            int eles=ele.first;
            int freq =ele.second;
            pair<int,int>pr={freq,eles};
            mpq.push(pr);
           if(mpq.size()>k){
            mpq.pop();
           }
        }

        vector<int>ans;
        while(mpq.size()>0){
            int ele=mpq.top().second;
            ans.push_back(ele);
            mpq.pop();
        }

        return ans;
    }
};