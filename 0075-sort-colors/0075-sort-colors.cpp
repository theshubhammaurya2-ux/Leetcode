class Solution {
public:
    void sortColors(vector<int>& nums) {
        // two pass solution
        int n=nums.size();
        int noz=0;
        int noo=0;
        int nt=0;
        for (int i=0;i<n;i++){
            if(nums[i]==0) noz++;
            else if(nums[i]==1) noo++;
            else nt++;
        }
        //fill
        for (int i=0;i<n;i++){
            if(i<noz) nums[i]=0;
            else if(i<(noz+noo)) nums[i]=1;
            else nums[i]=2;
        }
          return;
    }
  };