class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    int n=nums.size();
    priority_queue<int,vector<int>,greater<int>>mpq;
    for(int i=0;i<n;i++){
        mpq.push(nums[i]);
        if(mpq.size()>k){mpq.pop();}
    }
    return mpq.top();
    }
};