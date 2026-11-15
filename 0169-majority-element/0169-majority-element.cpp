class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        int majority=INT_MIN;
        for(auto x:mp){
            if(x.second>(n/2)){majority=max(majority,x.first);}
        }
        return majority;
    }
};