class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        vector<int>ans;
        int maxm=nums[0];
        ans.push_back(maxm);
        for(int i=0;i<nums.size();i++){
            if(nums[i]<maxm){
                maxm=nums[i];
                ans.push_back(nums[i]);
            }
        }
        if(ans.size()<3){
            return ans[0];        }
        return ans[3-1];
    }
};