class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int maxe=-1;
        for(auto ele:mp){
            if(ele.first==ele.second){
                maxe=max(maxe,ele.first);
            }
        }
        return maxe;
    }
};