class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>ans;
        int n=arr.size();
        bool flag[1000]={false};
        for(int i=0;i<n;i++){
            if(flag[i]==true){
                continue;
            }
            int count=1;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    flag[j]=true;
                }
            }
            ans.push_back(count);
        }

        sort(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++){
            if(ans[i]==ans[i-1]){return false;}
        }

        return true;
    }
};