class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
    for(char c : s){
        if(c == '('|| c == '{' || c == '['){
            st.push(c);
        }else{
            if(st.empty()) return false;
            if(c == ')' && st.top() != '(') return false;
            if(c == '}' && st.top() != '{') return false;
            if(c == ']' && st.top() != '[') return false;
            st.pop();
        }
    }
    return st.empty();
    }
      /*  stack<char> st;
        for(char c: s){
              if(c == '('|| c == '{' || c == '['){
            st.push(c);
              }
        else{
                  if(st.empty())return false;
            if(c == ')' && st.top() == '(')st.pop();
           else if(c == '}' && st.top() == '{') st.pop();
          else  if(c == ']' && st.top() == '[') st.pop();
        
            else return false;
              }
        }
         if(!st.empty())return false;
            return true;*/
};