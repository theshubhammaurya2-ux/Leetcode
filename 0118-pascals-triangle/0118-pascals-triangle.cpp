class Solution {
public:
    __int128 fact(int n){
        if (n==0 || n==1) return 1;
         return (__int128)(n*fact(n-1));
    }
     long long comb(int n,int r){
        return fact(n)/(fact(r)*fact(n-r));
    }

    vector<vector<int>> generate(int numrows) {
      
        vector<vector<int>> ans;
        for(int i=0;i<numrows;i++){
              vector<int> v;
               for(int j=0;j<=i;j++){
                    v.push_back( comb(i,j));
               }
               ans.push_back(v);
        }
        return ans;
    }  
};