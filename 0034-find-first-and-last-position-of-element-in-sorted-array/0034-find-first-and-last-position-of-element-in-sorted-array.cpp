class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int li=0;
        int ui=nums.size()-1;
        int first=-1,last=-1;

        while(li<=ui){
            int mid=li+(ui-li)/2;
            if(nums[mid]==target){first=mid; ui=mid-1;}
            else if(nums[mid]>=target){ui=mid-1;}
            else{li=mid+1;}
        }

         li=0;
         ui=nums.size()-1;

        while(li<=ui){
            int mid=li+(ui-li)/2;
            if(nums[mid]==target){last=mid; li=mid+1;}
            else if(nums[mid]>=target){ui=mid-1;}
            else{li=mid+1;}
        }





        return {first,last};
    }
};