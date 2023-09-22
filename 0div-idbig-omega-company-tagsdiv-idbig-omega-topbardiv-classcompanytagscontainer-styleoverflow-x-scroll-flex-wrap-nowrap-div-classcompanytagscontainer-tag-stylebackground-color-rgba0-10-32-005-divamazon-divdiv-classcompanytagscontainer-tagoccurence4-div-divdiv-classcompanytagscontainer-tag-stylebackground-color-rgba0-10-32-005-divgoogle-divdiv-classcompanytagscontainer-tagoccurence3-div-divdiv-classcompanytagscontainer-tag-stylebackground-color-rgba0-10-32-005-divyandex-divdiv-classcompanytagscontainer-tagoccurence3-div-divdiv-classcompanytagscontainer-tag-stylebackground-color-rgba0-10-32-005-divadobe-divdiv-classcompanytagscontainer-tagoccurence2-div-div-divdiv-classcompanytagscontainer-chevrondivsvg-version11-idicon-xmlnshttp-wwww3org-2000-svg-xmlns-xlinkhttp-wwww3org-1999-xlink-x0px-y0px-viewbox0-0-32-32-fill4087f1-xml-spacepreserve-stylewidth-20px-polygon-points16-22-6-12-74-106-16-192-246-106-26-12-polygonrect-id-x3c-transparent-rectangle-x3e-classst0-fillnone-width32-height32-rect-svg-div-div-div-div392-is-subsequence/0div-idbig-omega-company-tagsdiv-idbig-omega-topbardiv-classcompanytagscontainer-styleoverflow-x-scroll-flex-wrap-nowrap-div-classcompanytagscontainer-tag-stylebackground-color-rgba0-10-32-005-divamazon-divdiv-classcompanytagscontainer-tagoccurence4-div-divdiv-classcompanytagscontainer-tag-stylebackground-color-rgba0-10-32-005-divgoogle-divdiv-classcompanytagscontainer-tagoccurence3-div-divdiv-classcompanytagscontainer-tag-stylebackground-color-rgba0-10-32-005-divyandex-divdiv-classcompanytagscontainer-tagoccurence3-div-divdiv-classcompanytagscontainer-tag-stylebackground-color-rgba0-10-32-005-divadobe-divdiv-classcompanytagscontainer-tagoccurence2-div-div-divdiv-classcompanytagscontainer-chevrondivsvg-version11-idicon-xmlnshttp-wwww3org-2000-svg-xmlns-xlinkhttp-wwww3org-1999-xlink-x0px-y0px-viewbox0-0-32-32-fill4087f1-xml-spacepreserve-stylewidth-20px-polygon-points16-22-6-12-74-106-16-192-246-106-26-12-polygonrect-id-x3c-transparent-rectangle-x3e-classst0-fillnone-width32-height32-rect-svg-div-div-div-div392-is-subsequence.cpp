class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.size();
        int n=t.size();
        int j=0;
        int i=0;
        for( j=0;i< m && j< n;j++)
            if(s[i] == t[j])
                i++;
        
        return (i==m);
    }
};