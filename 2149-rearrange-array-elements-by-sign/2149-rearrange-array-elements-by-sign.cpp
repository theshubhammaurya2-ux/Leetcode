class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0;
        int j=1;
        vector<int>ans(nums.size(),0);
        for(int x:nums){
            if(x>0){
                ans[i]=x; i+=2;
            }
            else{
                ans[j]=x; j+=2;
            }
        }
        return ans;
    }
};