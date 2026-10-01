class Solution {
public:
    string removeStars(string s) {
        stack<int> st;
        for(char c:s){
            if(c=='*'){st.pop();}
            else{st.push(c);}
        }
        string str="";
        while(st.size()>0){
               str+=st.top();
               st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};