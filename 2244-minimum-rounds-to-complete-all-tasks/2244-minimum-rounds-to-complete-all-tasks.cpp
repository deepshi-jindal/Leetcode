class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
          map<int,int>mp;
        for(int i=0;i<tasks.size();i++)
            mp[tasks[i]]++;
        int min=0;
        for(auto it: mp){
            if(it.second==1)
                return -1;
            int cnt=0;
            while(it.second>3)
                it.second-=3, cnt++;
            if(it.second)
                cnt++;
            min+=cnt;
                
        }
            
        return min;
    }
};