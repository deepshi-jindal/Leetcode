class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> res;
        int w=0;
        int line=0;
        int last_width=0;
        for(int i=0;i<s.length();i++){
            w+=widths[(int)s[i]-97];
           
            if(w==100){
                line++;
                w=0;
            }
           else if(w>100){
                line++;
               w=0;
               i--;
            }
        }
         if(w==0){
                last_width=100;
            }
         else{
             last_width=w;
             line ++;
         }   
        res.push_back(line);
        res.push_back(last_width);
            return res;
    }
};