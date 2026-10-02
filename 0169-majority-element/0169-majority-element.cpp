class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int s=nums.size()/2;
        for(auto ele:m){
            if(ele.second>s){return ele.first;}

        }
        return -1;
    }
};