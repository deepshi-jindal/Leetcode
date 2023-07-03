class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        int j=0;
        set<int>se(s.begin(),s.end());
        if(s==goal && se.size()<s.size()){
            return true;
        }
        vector<int>v;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                v.push_back(i);
            }
        }
        return v.size()==2 && s[v[0]]==goal[v[1]] && s[v[1]]==goal[v[0]];
    }
};