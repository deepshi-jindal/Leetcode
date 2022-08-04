class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        int c=0;
        for(auto i:arr) mp[i]++;
        for(auto i: arr){
            if(mp[i]>1)continue;
            c++;
            if(c==k) return i;
        }
        return "";
    }
};