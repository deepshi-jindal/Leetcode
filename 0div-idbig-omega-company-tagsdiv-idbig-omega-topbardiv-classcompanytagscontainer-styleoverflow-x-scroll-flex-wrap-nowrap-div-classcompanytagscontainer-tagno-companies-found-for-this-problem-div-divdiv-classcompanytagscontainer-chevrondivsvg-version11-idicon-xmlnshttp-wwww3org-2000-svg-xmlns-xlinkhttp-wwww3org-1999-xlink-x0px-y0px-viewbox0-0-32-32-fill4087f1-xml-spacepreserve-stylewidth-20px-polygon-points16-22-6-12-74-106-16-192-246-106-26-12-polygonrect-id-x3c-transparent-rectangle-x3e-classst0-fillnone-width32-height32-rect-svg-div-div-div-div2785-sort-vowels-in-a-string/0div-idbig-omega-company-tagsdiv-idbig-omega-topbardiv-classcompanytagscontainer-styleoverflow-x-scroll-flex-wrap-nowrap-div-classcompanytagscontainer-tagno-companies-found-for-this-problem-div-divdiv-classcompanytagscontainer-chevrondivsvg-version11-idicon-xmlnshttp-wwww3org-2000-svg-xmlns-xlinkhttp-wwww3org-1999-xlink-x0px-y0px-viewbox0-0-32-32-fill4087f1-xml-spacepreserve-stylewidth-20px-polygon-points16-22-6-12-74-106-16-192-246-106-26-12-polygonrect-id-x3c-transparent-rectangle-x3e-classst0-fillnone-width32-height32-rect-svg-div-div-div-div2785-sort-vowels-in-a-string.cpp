class Solution {
public:
    string sortVowels(string s) {
        int n=s.size();
        vector<char>vow;
        vector<int>pos;
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                vow.push_back(s[i]);
                pos.push_back(i);
            }
        }
        sort(vow.begin(),vow.end());
        string ans=s;
        for(int i=0;i<pos.size();i++){
            ans[pos[i]]=vow[i];
        }
        return ans;
    }
};