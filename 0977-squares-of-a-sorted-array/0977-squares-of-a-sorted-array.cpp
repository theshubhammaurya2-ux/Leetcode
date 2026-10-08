class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int i=0;
        int j=nums.size()-1;
       for(int k=nums.size()-1;k>=0;k--){
            if(abs(nums[i])>=abs(nums[j])){ans[k]=(abs(nums[i])*abs(nums[i])); i++;}
            else {ans[k]=(nums[j]*nums[j]); j--;}
            
        }
        return ans;
    }
};