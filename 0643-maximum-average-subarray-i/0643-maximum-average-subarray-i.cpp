class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int maxm=sum;
        for(int j=k;j<n;j++){ 
           sum+=nums[j]-nums[j-k];
            maxm=max(maxm,sum);
        }
        return (double)maxm/k;
    }
};