class Solution {
public:
    bool areAlmostEqual(string s1, string s2)
    {
        if(s1==s2)
            return true;
        vector<int> pos;
        int n=s1.length();
        for(int i=0; i<n; i++) 
        {
            if(s1[i] != s2[i])
            {
                pos.push_back(i);
            }
            if(pos.size() == 2) 
            {
                break;
            }
        }
        if(pos.size() == 2) 
        {
            swap(s2[pos[0]], s2[pos[1]]);
        }
        return s1 == s2 ? true : false;
    }
};