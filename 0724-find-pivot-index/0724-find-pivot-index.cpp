class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum=0;
        for(int i=0;i<nums.size();i++){
            totalsum+=nums[i];
        }
        int rightsum=0,leftsum=0;
        for(int i=0;i<nums.size();i++){
            rightsum=totalsum-leftsum-nums[i];
            if(leftsum==rightsum){return i;}
            leftsum+=nums[i];
        }
        return -1;
    }
};