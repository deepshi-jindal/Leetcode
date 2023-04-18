class Solution {
public:
    string mergeAlternately(string word1, string word2) {
     /*int i=0;int j=0;
        string res=" ";
        while(i<word1.size() && j<word2.size()){
            res+=word1[i++];
                
            res+=word2[j++];
        }
        while(i<word1.size()){
            res+=word1[i++];
            res+=word2[j++];
        }
        
     
     while(i<word1.size() && j<word2.size()){
            res+=word1[i++];
               
            res+=word2[j++];
        }
    return res;*/
         string res;
    for (auto i = 0; i < max(word1.size(), word2.size()); ++i) {
        if (i < word1.size())
            res += word1[i];
        if (i < word2.size())
            res += word2[i];
    }
    return res;
            
    }
};