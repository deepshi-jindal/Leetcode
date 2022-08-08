class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        int x=0;
        for(int i=0;i<n;i++){
            string s=operations[i];
            if(s[0]=='-')
                x--;
            else if(s[0]=='+')
                x++;
            else if(s[2]=='-')
                x--;
            else
                x++;
        }
        return x;
    }
};