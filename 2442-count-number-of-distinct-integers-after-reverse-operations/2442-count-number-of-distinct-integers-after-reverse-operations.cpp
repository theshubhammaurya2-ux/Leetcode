class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>s;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
            int n=nums[i];
            int rev=0;
                while(n>0){
                    int d=n%10;
                    rev=rev*10+d;
                    n=n/10;
                }
                ans.push_back(rev);
        }

        for(int i=0;i<ans.size();i++){
                s.insert(ans[i]);
        }
        return s.size();
    }
};