class Solution {
public:
    int lengthOfLastWord(string s) {
          stringstream ss(s);
          string temp;
          vector<string> ans;
          while(ss>>temp){
            ans.push_back(temp);
          } 
         int n=ans.size();
         return ans[n-1].length();
    }
};