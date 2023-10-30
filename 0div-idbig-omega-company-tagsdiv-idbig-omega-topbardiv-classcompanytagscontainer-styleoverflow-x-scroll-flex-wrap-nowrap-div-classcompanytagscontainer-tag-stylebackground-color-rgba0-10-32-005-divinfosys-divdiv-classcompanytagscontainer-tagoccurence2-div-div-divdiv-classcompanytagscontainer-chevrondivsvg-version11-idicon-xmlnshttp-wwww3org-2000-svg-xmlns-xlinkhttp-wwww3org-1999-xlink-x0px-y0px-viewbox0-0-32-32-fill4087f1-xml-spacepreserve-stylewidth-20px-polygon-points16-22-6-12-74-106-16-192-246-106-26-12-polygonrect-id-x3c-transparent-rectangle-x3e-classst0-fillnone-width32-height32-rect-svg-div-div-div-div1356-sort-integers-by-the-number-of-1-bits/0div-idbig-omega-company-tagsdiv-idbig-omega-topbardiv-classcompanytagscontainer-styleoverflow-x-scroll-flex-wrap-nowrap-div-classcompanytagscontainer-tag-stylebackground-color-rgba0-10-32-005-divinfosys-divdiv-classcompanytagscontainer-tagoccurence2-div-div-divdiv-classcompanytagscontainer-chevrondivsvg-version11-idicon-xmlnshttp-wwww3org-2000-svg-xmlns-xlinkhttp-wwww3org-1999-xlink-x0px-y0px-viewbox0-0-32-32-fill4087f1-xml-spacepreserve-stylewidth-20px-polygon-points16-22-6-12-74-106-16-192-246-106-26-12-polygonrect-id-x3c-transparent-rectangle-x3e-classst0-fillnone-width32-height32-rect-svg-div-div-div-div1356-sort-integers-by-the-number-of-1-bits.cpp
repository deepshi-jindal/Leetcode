class Solution {
public:
    int countBits(int n){
        int count=0;
        while(n){
            if(n%2==1)
                count++;
            n/=2;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        map<int, vector<int>>mp;
        vector<int> v;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
            mp[countBits(arr[i])].push_back(arr[i]);
        for(auto it=mp.begin();it!=mp.end();it++){
            for(int a: it->second)
                v.push_back(a);
        }
        return v;
    }
};