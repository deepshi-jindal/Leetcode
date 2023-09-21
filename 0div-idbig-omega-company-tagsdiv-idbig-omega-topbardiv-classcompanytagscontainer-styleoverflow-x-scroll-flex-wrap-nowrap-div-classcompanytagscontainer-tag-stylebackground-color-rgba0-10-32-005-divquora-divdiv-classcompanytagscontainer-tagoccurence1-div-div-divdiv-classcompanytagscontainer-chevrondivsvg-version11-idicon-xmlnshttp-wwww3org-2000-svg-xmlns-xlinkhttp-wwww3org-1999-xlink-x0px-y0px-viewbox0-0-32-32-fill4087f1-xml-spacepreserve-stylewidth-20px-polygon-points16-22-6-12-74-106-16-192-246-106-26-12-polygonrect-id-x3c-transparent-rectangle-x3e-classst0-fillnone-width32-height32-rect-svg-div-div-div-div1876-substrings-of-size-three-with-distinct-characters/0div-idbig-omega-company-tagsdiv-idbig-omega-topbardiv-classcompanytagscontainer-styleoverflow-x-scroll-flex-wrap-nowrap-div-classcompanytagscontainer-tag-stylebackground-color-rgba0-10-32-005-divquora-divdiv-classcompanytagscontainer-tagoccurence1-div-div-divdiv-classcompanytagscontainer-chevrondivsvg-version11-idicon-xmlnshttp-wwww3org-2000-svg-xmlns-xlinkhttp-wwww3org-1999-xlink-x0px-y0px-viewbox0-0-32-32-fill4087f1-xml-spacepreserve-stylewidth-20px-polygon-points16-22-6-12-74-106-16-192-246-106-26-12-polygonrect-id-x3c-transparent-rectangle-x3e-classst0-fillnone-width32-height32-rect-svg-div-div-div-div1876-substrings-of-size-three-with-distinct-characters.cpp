class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0,j=0;
        int n=s.size();
        int ans=0;
        while(j<n){
            if(j-i+1==3){
                string temp=s.substr(i,3);
                map<int,int>mp;
                for(auto i:temp){
                    mp[i]++;
                }
                if(mp.size()==3){
                    ans++;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};