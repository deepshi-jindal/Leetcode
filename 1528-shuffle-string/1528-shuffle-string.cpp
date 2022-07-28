class Solution {
public:
    string restoreString(string s, vector<int>& indices)
    {
        int len = indices.size();
        string result = s;
        int i;
        for(i=0; i<len; i++)
            result[indices[i]] = s[i];      
        return result;
    }
};