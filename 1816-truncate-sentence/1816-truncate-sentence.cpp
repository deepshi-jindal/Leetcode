class Solution {
public:
    string truncateSentence(string s, int k) {
     string result="";
        int count=0;
        for (char i :s){
            if(i == ' ')
                count++;
            if(count<k)
                result+=i;
        }
        return result;        
    }
};