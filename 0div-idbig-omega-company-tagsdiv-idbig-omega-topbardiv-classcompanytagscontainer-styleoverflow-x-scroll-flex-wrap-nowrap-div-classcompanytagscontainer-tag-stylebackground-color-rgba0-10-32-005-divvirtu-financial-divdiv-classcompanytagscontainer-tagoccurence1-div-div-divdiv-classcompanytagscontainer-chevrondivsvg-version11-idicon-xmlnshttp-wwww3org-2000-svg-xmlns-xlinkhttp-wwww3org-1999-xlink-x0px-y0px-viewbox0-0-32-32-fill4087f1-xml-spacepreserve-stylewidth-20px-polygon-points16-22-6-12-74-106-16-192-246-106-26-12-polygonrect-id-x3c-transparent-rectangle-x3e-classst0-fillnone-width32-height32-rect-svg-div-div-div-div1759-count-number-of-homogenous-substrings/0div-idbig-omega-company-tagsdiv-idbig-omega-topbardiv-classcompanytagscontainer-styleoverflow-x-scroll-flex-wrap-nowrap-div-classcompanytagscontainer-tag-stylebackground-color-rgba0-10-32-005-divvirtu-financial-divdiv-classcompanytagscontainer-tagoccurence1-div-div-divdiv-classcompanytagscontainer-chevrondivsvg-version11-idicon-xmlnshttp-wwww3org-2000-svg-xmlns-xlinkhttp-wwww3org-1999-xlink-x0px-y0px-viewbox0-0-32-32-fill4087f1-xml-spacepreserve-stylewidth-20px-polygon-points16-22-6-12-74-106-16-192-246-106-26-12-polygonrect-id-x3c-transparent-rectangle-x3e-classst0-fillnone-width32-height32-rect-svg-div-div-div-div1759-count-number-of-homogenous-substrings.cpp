class Solution {
public:
    int countHomogenous(string s) {
     int res=0,count=0;
      for(int i=0;i<s.length();i++){
          if(i>0 && s[i-1]==s[i]){
              ++count;
          }
          else{
              count=1;
          }
              res=(res+count)%1000000007;
          
      }
        return res;
    }
};