class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charcount(26,0);
        for(char &ch:chars){
            charcount[ch-'a']++;
        }
        int res=0;
        for(string &word:words){
            vector<int>wordcount(26,0);
            for(char &ch:word){
                wordcount[ch-'a']++;
            }
            
            bool is=true;
            for(int i=0;i<26;i++){
                if(wordcount[i]>charcount[i]){
                    is=false;
                    break;
                }
            }
            if(is==true){
                res+=word.length();            }
        }
    
    return res;
}
};