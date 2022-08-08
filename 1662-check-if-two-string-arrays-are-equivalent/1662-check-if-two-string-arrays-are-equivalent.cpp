class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& words1, vector<string>& words2) {
        for(int i=1;i<words1.size();i++)
            words1[0]+=words1[i];
        for(int i=1;i<words2.size();i++)
            words2[0]+=words2[i];
        if(words1[0]==words2[0])
            return true;
        return false;
    }
};