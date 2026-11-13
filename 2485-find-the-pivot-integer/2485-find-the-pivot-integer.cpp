class Solution {
public:
    int pivotInteger(int n) {
        int totalsum=0;
        for(int i=0;i<=n;i++){
            totalsum+=i;
        }
        int rightsum=0,leftsum=0;
        for(int i=0;i<=n;i++){
            rightsum=totalsum-i-leftsum;
            if(leftsum==rightsum){return i;}
            leftsum+=i;
        }
        return -1;
    }
};