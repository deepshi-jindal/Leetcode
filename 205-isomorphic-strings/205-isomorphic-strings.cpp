class Solution {
public:
    bool isIsomorphic(string s, string t) {
      int m=s.size();
        char arr[128]={};
        for(int i=0;i<m;i++){
            char c=s[i];
            if(!arr[c]){
                for(char s :arr)
                    if(s==t[i])
                        return false;
                arr[c]=t[i];
            }
            else if (arr[c] != t[i]) return false;
        }
        return true;
    }
};







/*class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        
        for(int i=0; i<s.size(); i++)
        {
            if(mp1[s[i]] != mp2[t[i]]) return false;
            
            mp1[s[i]] = i+1;
            mp2[t[i]] = i+1;
        }
        
        return true;
    }
};*/