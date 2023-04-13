class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int a=0;
        for(int i=0;i<pushed.size();i++){
            st.push(pushed[i]);
        
     while(!st.empty()&& st.top()==popped[a]){
         st.pop();
         a++;
     }   
        }  
        return st.empty();
    }
};