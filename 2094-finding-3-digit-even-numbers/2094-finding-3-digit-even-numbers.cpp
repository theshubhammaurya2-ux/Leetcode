class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
       int n=digits.size();
       vector<int>ans;
      unordered_map<int,int> s;
       for(int i=0;i<n;i++){
         s[digits[i]]++;}

       for(int i=100;i<999;i+=2){
        
            int x=i;
            int a,b,c;
            a=x%10; x=x/10;
            b=x%10; x=x/10;
            c=x%10;
           if(s.find(a)!=s.end()){
              s[a]--; 
              if(s[a]==0){s.erase(a);}
              if(s.find(b)!=s.end()){
                s[b]--;
                 if(s[b]==0 ){s.erase(b);}
                if(s.find(c)!=s.end()){ans.push_back(i);}
                s[b]++;
              }  
              s[a]++;
           }  
         }
         return ans;
    }
};