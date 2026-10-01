class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;
        string ans="";
        while(i>=0 || j>=0 || carry){
             int x=i>=0?a[i]-'0':0;
             int y=j>=0?b[j]-'0':0;
             int sum=x^y^carry;
             carry=(x&y) |(y&carry)|(x&carry);
             ans+=char(sum+'0');
                i--;
                j--;
        }
      reverse(ans.begin(),ans.end());
        return ans;
    }
};