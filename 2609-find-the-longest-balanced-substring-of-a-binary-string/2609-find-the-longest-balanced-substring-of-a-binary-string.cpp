class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
      int maxi=0;
        for(int i=0;i<s.size();){
            int zero=0;
            int one=0;
            while(i<s.size() && s[i]=='0'){
                zero++;
                i++;
            }
             while(i<s.size() && s[i]=='1'){
                one++;
                i++;
            }
            int len=2* min(zero,one);
            maxi=max(maxi,len);
        }
        return maxi;
    }
};

