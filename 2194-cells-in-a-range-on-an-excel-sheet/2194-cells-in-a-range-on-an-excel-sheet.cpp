class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>res;
       int a=s[0];
        for(char i=s[0];i<=s[3];i++){
            for(char j=s[1];j<=s[4];j++){
                res.push_back({i,j});
            }
        }
        return res;
    }
};