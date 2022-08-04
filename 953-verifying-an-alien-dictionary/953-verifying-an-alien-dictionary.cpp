class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order)
    {
        unordered_map<char,int> map;
        
        for(int i=0; i<order.length(); i++){
            map[order[i]] = i+1;
        }
        
        for(int i=1; i<words.size(); i++){
            int m = words[i].length();
            int n = words[i-1].length();
            int j=0;
            for(; j<m && j<n; j++){
                if(map[words[i][j]] > map[words[i-1][j]])
                    break;
                if(map[words[i][j]] < map[words[i-1][j]])
                    return false;
            }
            if(j==m && j<n){
                return false;
            }
        }
        
        return true;
    }
};