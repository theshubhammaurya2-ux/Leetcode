class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<0){return false;}
        long long li=0,hi=num;
        while(li<=hi){
            long long mid=li+(hi-li)/2;
            long long square=mid*mid;
            if(square==num){return true;}
            else if(square>num){hi=mid-1;}
            else{li=mid+1;}
        }
       return false;
    }
};