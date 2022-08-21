class Solution {
public:
    int check(string &s, string stamp){
        int n=s.length();
        for(int i=0;i<n;i++){
           int j=0,tmp=i;
              bool boo=false;
            while(j<stamp.length() and tmp<n && (s[tmp]=='?' || s[tmp]==stamp[j]))
            {
                // if there is a stamping 
                // boo = true
                if(s[tmp]==stamp[j])
                    boo = true;
                // increment temp and j each time
                tmp++;
                j++;
            }
         // if there exists any valid index where we can do stamping
            if(j==stamp.length() && boo)
            {
                // change the string str
                for(int k=0;k<stamp.length();k++)
                    s[i+k]='?';
 
                // return index 
                return i;
            }
        }
 
        return n;
    }
    
    vector<int> movesToStamp(string stamp, string target) {
       vector<int> ans,result;
        string s=target;
        string str(target.length(),'?');
        while(s!=str){
            int value=check(s,stamp);
            if(value==s.length())
                return result;
            ans.push_back(value);
        }
        for(int i=ans.size()-1;i>=0;i--){
            result.push_back(ans[i]);
        }
        return result;
    }
};