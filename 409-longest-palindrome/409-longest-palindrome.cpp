class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(char c: s){
            mp[c]++;
        }
        int result=0;
        bool odd_found=false;
        for(auto &c : mp){
            if(c.second%2==0)
                result+=c.second;
        
        else{
            odd_found=true;
            result+=c.second-1;
        }
        }
            if(odd_found) result++;
          return result;          
    }
};