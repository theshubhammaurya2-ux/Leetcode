class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char>s;
        for(int i=0;i<sentence.size();i++){
            s.insert(((int)sentence[i])-97);
        }
        for(int i=0;i<26;i++){
            if(s.find(i)==s.end()){
                return false;
            }
        }
        return true;
    }
};