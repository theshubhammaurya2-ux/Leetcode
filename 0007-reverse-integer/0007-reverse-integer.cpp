class Solution {
public:
    int reverse(int x) {
        if(x>=0){
           long long rev=0;
            while(x!=0){
            long long  d=x%10;
                rev=rev*10+d;
                x=x/10;
                if (rev > INT_MAX || rev < INT_MIN)
                     return 0;
            }
            return rev;
        }

        else{
              long long y=(-1*(long long)x);
              long long  rev=0;
            while(y!=0){
                long long  d=y%10;
                rev=rev*10+d;
                y=y/10;
                if (rev > INT_MAX || rev < INT_MIN)
               return 0;
            }
            return (-1*rev);
        }
        }
    
};