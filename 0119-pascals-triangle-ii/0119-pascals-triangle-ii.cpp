class Solution {
public:
     __int128 fact(int n){
        if (n==0 || n==1) return 1;
         return (__int128)(n*fact(n-1));
    }
     long long comb(int n,int r){
        return fact(n)/(fact(r)*fact(n-r));
    }



    vector<int> getRow(int rowIndex) {
              vector<int> v;
        for(int i=0;i<=rowIndex;i++){
                v.push_back( comb(rowIndex,i));
            
        }
        return v;
    }
};