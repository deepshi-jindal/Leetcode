class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
            int arr[26];
        int ans=-1;
        memset(arr,-1,sizeof(arr));
        for(int i=0;i<s.size();i++){
            if(arr[s[i]-'a']==-1){
                arr[s[i]-'a']=i;
            }
            int op=i-arr[s[i]-'a']-1;
            ans=max(ans,op);
        }
        return ans;
    }
};