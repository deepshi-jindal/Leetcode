
class Solution {
public:
	int strStr(string haystack, string needle) {
		
        if(haystack==needle)
            return 0;
        return haystack.find(needle);
	}
};