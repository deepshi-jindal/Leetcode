const int MOD=1000000007;
class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n= (int) arr.size();
        map<int , long long> map;
        int ans=0;
        for(int i=0;i<n;i++){
            map[arr[i]]=1;
            for(int j=0;j<i;j++){
                if(arr[i]%arr[j]==0){
                    map[arr[i]]+=(map[arr[j]]*map[arr[i]/arr[j]]) %MOD;
                    map[arr[i]]%=MOD;
                }
            }
            ans=(ans+map[arr[i]])%MOD;
        }
        return ans;
    }
};