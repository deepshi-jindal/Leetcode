class Solution {
public:
    
    string oddString(vector<string>& words) {
       /* int n=words.size();
        int a=words[0].size();
        map<vector<int>,int> mp;
        for(int i=0;i<n;i++){
            vector<int>res;
            for(int j=1;i<a;j++){
                res.push_back(words[i][j]-words[i][j-1]);
            }
            mp[res]++;
        }
        vector<int>res2;
        for(auto i: mp)
            if(i.second==1)
                res2=i.first;
        for(int i=0;i<n;i++){
            vector<int>res;
            for(int j=1;j<a;j++){
                res.push_back(words[i][j]-words[i][j-1]);
            }
            if(res==res2)
                return (words[i]);
        }
        
        return (words[0]);*/
        map<vector<int>,vector<string>> mp;
        for(string word: words){
            vector<int>temp;
            for(int i=1;i<word.size();i++){
                temp.push_back((int)word[i]-(int)word[i-1]);
            }
            mp[temp].push_back(word);
        }
        for(auto it:mp){
            if(it.second.size()==1)
                return it.second[0];
        }
        return "";
    }
};