class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<int>ans;
    unordered_map<int,int>m;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        int rem=target-nums[i];
        if(m.find(rem)!=m.end()){
            ans.push_back(m[rem]);
            ans.push_back(i);
        }
        else{
        m[nums[i]]=i;}
    }
    return ans; 
    }
};