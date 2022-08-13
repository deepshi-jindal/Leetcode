class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
                int len = words[0].length(), noOfWords = words.size();
        vector<int> result;
        map<string, int> Map;
          if (len * noOfWords > s.length())
            return result;
         for (string word : words)
            Map[word]++;
        
         for (int index = 0; index <= s.length() - (noOfWords * len); index++) {
            map<string, int> wordsMap;
         for (int i= index; i < index + (noOfWords * len); i += len) {
                string cur = s.substr(i, len);
                if(Map.find(cur) == Map.end())
                    break;
              wordsMap[cur]++;
                
                if(wordsMap[cur] >Map[cur])
                    break;
            }
            
            if (wordsMap == Map)
                result.push_back(index);
        }
        
        return result;
    }
};
