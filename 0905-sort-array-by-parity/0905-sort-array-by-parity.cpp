class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> anse;
        vector<int> anso;
        for(int i=0;i<nums.size();i++){
           if(nums[i]%2==0){anse.push_back(nums[i]);}
           else{anso.push_back(nums[i]);}
        }
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(i<anse.size()){nums[i]=anse[i];}
            else{nums[i]=anso[k];k++;}
        }
        return nums;
    }
};