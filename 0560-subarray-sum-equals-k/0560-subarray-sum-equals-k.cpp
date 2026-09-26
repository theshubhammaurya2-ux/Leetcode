class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=1;i<nums.size();i++){
           nums[i]+=nums[i-1];
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k){count++; }
              int n=nums[i]-k;
              if(m.find(n)!=m.end()){count+=m[n];
                }
                m[nums[i]]++;
          
        
    }
    return count;  
}
};