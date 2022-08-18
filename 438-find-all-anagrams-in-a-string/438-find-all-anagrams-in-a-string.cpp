//SLIDING WINDOW APPROACH

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> hash(26,0);
        vector<int> phash(26,0);
        int win=p.size();
        int len=s.size();
        if(len<win)
            return ans;
        int l=0,r=0;
        while(r<win){
            phash[p[r]-'a']+=1;
            hash[s[r++]-'a']+=1;
        }
        r-=1;
        while(r<len){
            if(phash==hash)
                ans.push_back(l);
            r+=1;
            if(r!=len)
                hash[s[r]-'a']+=1;
            hash[s[l]-'a']-=1;
            l++;
        }
        return ans;
    }
};