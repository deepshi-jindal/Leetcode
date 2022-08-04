class Solution 
{
public:
    string freqAlphabets(string s) 
    {
        int i = 0;
        string output;
        for(; i < s.length();)
        {
            if(i + 2 < s.length() &&  s[i + 2] == '#')
            {
                int num = (s[i] - 48) * 10 + (s[i + 1] - 48);
                output += num + 96;
                i += 3;
            }
            else
            {
                output += s[i] - 48 + 96;
                i++;
            }
        }
        return output;
    }
};