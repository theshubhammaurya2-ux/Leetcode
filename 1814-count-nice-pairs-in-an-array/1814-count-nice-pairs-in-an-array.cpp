class Solution {
public:
    int rev(int n) {
        int ans=0;
        while (n>0) {
            ans=ans*10+n%10;
            n/=10;
        }
        return ans;
    }

    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m;
        int count=0;
        for(int i=0;i<n;i++){
      nums[i]-=rev(nums[i]);
          
    }
    for(int i=0;i<n;i++){
      if(m.find(nums[i])!=m.end()){
           count=count%1000000007;
           count+=m[nums[i]];
           m[nums[i]]++;
      }
      else {
        m[nums[i]]++;
      }
    }

  
  return count%1000000007;
}
};