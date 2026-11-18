class Solution {
public:
    int search(vector<int>& nums, int target) {
        int li=0;
        int ui=nums.size()-1;
        while(li<=ui){
            int mid=li+(ui-li)/2;
            if(nums[mid]==target){return mid;}
            if(nums[li]<=nums[mid]){
                if(nums[li]<=target && target<nums[mid]){ui=mid-1;}
                else li=mid+1;
            }
            else{
                if(nums[mid]<target && target<=nums[ui]){li=mid+1;}
                else{ui=mid-1;}
            }  
                
                
            }        
        return -1;
    }
};