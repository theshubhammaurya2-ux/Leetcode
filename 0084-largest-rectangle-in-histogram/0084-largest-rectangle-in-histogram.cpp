class Solution {
public:
    int largestRectangleArea(vector<int>& heights ) {
        int n=heights .size();
        
        //psi
        int psi[n];
        psi[0]=-1;
        stack<int> st;
        st.push(0);
        for(int i=1;i<n;i++ ){
            while(st.size()>0 && heights[st.top()]>=heights[i]){st.pop();}

            if(st.size()==0){psi[i]=-1;}
            else {psi[i]=st.top();}
            st.push(i);
        }

        //nsi
        stack<int>s;
        int nsi[n];
        nsi[n-1]=n;
        s.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(s.size()>0 && heights[s.top()]>=heights[i] ){s.pop();}
            if(s.size()==0){nsi[i]=n;}
            else{nsi[i]=s.top();}
            s.push(i);
        }

        int maxarea=0;
        for(int i=0;i<n;i++){
            int length=heights[i];
            int breadth=nsi[i]-psi[i]-1;
            int area=length*breadth;
            maxarea=max(area,maxarea);
        }
        return maxarea;
    }
};