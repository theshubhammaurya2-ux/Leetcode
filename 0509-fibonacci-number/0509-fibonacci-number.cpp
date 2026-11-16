class Solution {
public:

     int givefib(int n){
        if(n==0){return 0;}
        if(n==1){return 1;}
       return givefib(n-1)+givefib(n-2);
     }

    int fib(int n) {
      return  givefib(n);
      
      }
    
};