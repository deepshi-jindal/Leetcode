/*class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
        int count[26]={0};
        for(char c: s1)
            count[c -'a']+=1;
        int start=0;
        for(int i=0;i<s1.length();i++)
            count[s2[i] - 'a']-=1;
        bool match=true;
        for(int c:count){
            if(c!=0){
                match= false;
        break;
            }
        }
        if(match)
            return true;
        start++;
        
        while(start<=s1.length() - s2.length()){
            int a=s2[start-1]-'a';
            int b=s2[start+s1.length()-1]-'a';
            count[a]+=1;
            count[b]-=1;
    match=true;
        for(int c:count){
            if(c!=0){
                match= false;
        break;
            }
        }
        if(match)
            return true;
        start++;
        }
         return false;   
    }
};*/
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        if(s1.length()>s2.length())
        {
            return false;
        }
        for(int i=0;i<s2.length()-s1.length()+1;i++)
        {
            string p=s2.substr(i,s1.length());
            
            sort(p.begin(),p.end());
            if(p==s1)
            {
                
                return true;
            }
        }
        return false;
        
    }
};