class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int li=0;
        int ui=n-1;
        while(li<ui){
            int mid=li+(ui-li)/2;
          if(nums[mid]>nums[ui]){li=mid+1;}
            else{ui=mid;}     
        }
  return nums[li];
    }
};