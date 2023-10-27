class Solution {
public:
    // bool check(string&s,int i,int j){
    //     while(i<j){
    //         if(s[i]!=s[j]){
    //             return false;
    //         }
    //         i++;
    //         j--;
    //     }
    //     return true;
    // }
    // string longestPalindrome(string s) {
    //     int n=s.length();
    //     int starting_index=0;
    //     int end_index=0;
    //     for(int i=0;i<n;i++){
    //         for(int j=i;j<n;j++){
    //             if(check(s,i,j)){
    //                 if(j-i+1>end_index){
    //                     end_index=j-i+1;
    //                     starting_index=i;
    //                 }
    //             }
    //         }
    //     }
    //     return s.substr(starting_index,end_index);
    // }
    string longestPalindrome(string s) {
     int n=s.length();
        string s1=s;
        reverse(s1.begin(),s1.end());
        string ans;
        int res=0;
        int dp[n+1][n+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0)
                    dp[i][j]=0;
                else if(s[i-1]==s1[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                    dp[i][j]=0;
                
                if(dp[i][j]>res){
                    string temp=s.substr(i-dp[i][j],dp[i][j]);
                    string rev=temp;
                    reverse(rev.begin(),rev.end());
                    if(temp==rev){
                        ans=temp;
                        res=dp[i][j];
                    }
                }
            }
        }
        return ans;
    }
};
