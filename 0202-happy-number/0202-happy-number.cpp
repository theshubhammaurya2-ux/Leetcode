class Solution {
public:
    bool isHappy(int n) {
     unordered_set<int>mp;
       while(n!=1){
        if(mp.find(n)!=mp.end()){return false;}
        int sum=0;
        mp.insert(n);
        while(n>0){
            int d=n%10;
            sum+=d*d;
            n/=10;
        }

        n=sum;
       }  
     return true;
    }
};