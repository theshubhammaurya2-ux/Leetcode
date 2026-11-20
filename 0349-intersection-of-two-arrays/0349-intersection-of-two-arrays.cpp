class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
              mp2[nums2[i]]++;
        }
        for(auto x:mp2){
            if(mp1[x.first]!=0){
                ans.push_back(x.first);}
        }
  return ans;
    }
};