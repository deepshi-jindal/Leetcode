class Solution {
public:
    int solve(string ans, int k,char c){
         int i=0;
        int j=0;
        int cnt=0;
        int n=ans.size();
        int ans3=0;
          while(j<n){
          if(ans[j]==c)
          cnt++;
          while(i<n&&cnt>k){
           if(ans[i]==c)
           cnt--;
           i++;
          }  
          ans3=max(j-i+1,ans3);
          j++;
        }
        return ans3;
    }
    int maxConsecutiveAnswers(string ans, int k) {
       
        int ans1=solve(ans,k,'T');
        int ans2=solve(ans,k,'F');
         return max(ans1,ans2);
    }
};