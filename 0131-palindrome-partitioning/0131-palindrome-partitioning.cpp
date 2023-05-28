class Solution {
public:
   vector<vector<string>> res;
   vector<string> curr;
   bool is_palin(string s, int left, int right){
       while(left<=right){
           if(s[left] !=s[right]){
               return false;
           }
           left++;
           right--;
       }
       return true;
   }

   void palindrome(string &s, int i, int n){
       if(i==n){
           res.push_back(curr);
           return;
       }
       for(int j=i; j<n; j++){
           if(is_palin(s,i,j)){
               curr.push_back(s.substr(i,j-i+1));
               palindrome(s,j+1,n);

               curr.pop_back();
           }
       }
   }
    vector<vector<string>> partition(string s) {
        int n=s.size();
        palindrome(s,0,n);
        return res;
    }
};