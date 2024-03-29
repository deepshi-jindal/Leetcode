class Solution {
public:
    int minSteps(string s, string t) {
        int n=s.length();
        int m=t.length();
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        if(n!=m)
        return 0;
        // int count=0;
        // for(int i=0;i<n;i++){
        //     if(s[i]!=t[i]){
        //         count++;
        //     }
        // }
        // return count;
          int Freq[26]={0};
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            Freq[s[i]-'a']++;
            Freq[t[i]-'a']--;
        }
        
        for(int i=0;i<26;i++)
        {
            if(Freq[i]>0)
                count+=Freq[i];
        }
        
        return count;
    }
};