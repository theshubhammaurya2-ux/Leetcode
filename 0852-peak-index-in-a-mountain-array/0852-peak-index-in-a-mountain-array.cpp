class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int li=0;
        int ui=n-1;
        while(li<ui){
            int mid=li+(ui-li)/2;
           if(arr[mid]>arr[mid+1]){
               ui=mid;
            }
          
            else{
                li=mid+1;
            }
        }
        return li;
    }
};