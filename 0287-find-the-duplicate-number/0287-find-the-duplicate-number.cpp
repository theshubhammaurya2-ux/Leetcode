class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // for(auto x:mp){
        //     if(x.second>1){return x.first;}
        // }
        // return -1;


        //method 2 floyd algorithm
        int n=nums.size();
         int slow=nums[0];
         int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];

         } while(fast!=slow);

         
         slow=nums[0];
         while(fast!=slow){
            slow=nums[slow];
           fast=nums[fast];
         }
        return slow;
    }
};