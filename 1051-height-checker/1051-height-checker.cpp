class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        vector<int> height=heights;
        sort(height.begin(),height.end());
        for(int i=0;i<heights.size();i++){
            if(height[i]!=heights[i]){count++;}
        }
        return count;
    }
};