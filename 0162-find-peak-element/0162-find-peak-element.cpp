class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int li=0;
        int ui=n-1;
        while(li<ui){
            int mid=li+(ui-li)/2;
            if(nums[mid]<nums[mid+1]){li=mid+1;}
            else{ui=mid;}
        }
        return li;
    }
};