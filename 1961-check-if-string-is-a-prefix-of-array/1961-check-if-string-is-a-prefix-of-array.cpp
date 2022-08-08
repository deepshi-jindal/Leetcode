class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        if(words[0]==s)
            return true;
        for(int i=1;i<words.size();i++){
            words[0]+=words[i];
        if(words[0]==s)
            return true;
        }
        return false;
    }
};