class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
         unordered_set<string>s;
        int count=0;
            for(int i=0;i<words.size();i++){
              s.insert(words[i]);   
               }

          for(int k=0;k<words.size();k++){
               string rev=words[k];
               reverse(rev.begin(),rev.end());
               if(words[k]==rev){continue;}
              if(s.find(rev)!=s.end()){
                count++;
                s.erase(words[k]);
              } 
        }

        return count;
    }
};