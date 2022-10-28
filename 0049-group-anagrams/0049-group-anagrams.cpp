class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        int n=strs.size();
        string temp;
        for(int i=0;i<n;i++){
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            m[strs[i]].push_back(temp);
        }
        vector<vector<string>> ans;
        for(auto j=m.begin();j!=m.end();j++)
            ans.push_back(j->second);
        return ans;
    }
};