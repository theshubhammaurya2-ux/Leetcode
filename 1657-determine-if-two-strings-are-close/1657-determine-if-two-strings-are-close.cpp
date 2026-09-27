class Solution {
public:             
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()){ return false;}
        unordered_map<char,int >mp1,mp2;
       for(int i=0;i<word1.length();i++){
              mp1[word1[i]]++;
              mp2[word2[i]]++;
        }

        for(auto ele:mp1){
            char ch=ele.first;
            if(mp2.find(ch)==mp1.end()) return false;
        }
        unordered_map<int,int>num1,num2;
        for(auto x:mp1){
            int freq=x.second;
            num1[freq]++;
        }
        for(auto x:mp2){
            int freq=x.second;
            num2[freq]++;
        }

        //comparing both num1 and num2
        for(auto ele:num1){
          int key=ele.first;
            if(num2.find(key)==num2.end()) return false;
            if(num2[key]!=num1[key]) return false;
        }
        return true;
    }
};