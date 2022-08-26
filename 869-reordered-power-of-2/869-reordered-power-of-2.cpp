class Solution {
public:
    bool reorderedPowerOf2(int n) 
    {
        if((n & (n - 1)) == 0) 
            return true;
        string x = to_string(n);
        sort(x.begin(), x.end());
        for(int i = 0; i <= 30; i++)
        {
            int z = pow(2, i);
            string p = to_string(z);
            sort(p.begin(), p.end());
            if(p == x)  
                return true;
        }
        return false;
    }
};