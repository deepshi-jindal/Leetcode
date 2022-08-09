class Solution {
public:
    vector<string> res;
    int count=1;
    
    vector<string> letterCasePermutation(string s) {
      transform(s.begin(),s.end(),s.begin(), ::tolower);
        res.push_back(s);
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i])){
                add(toupper(s[i]),i);
            }
        }
       return res;
    }
        void add(char n ,int pos){
            int i=0;
            while(i<count){
                string x=res[i];
                x[pos]=n;
                res.push_back(x);
                i++;
            }
            
        count+=count;
    }
};