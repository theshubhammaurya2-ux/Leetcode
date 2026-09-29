class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int si=0;
        int mid=n-k;
        int ei=n-1;
        vector<int> ans;
        for(int i=mid;i<=ei;i++){
            ans.push_back(nums[i]);
        }
        for(int i=si;i<mid;i++){
            ans.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }
    }
};