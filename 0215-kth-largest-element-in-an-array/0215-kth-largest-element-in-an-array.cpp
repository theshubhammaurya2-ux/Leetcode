class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        vector<int>ans;
        int n=nums.size();
        int max=nums[0];
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]<=max){
                max=nums[i];
                ans.push_back(max);
            }
        }
        return ans[k-1];
    }
};