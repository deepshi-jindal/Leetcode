class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if(source==target)return 0;
        unordered_map<int,vector<int>>bus;
        for(int i=0;i<routes.size();++i)
        {
            for(auto stop:routes[i])
            {
                bus[stop].push_back(i); //each stop's buses
            }
        }
        vector<bool>bus_taken(routes.size());
        queue<int>q;
        for(auto take:bus[source])  //taking all buses of source stop
        {
            bus_taken[take]=1;
            q.push(take);
        }
        int ans=0;
        while(!q.empty())
        {
            ++ans;
            for(int s=q.size();s>0;--s)
            {
                int current=q.front(); //current bus
                q.pop();
                for(int route:routes[current]) //all routes of current bus
                {
                    if(route==target)return ans;
                    for(int i=0;i<bus[route].size();i++) //all buses of current stop
                    {
                        if(!bus_taken[bus[route][i]]) //checking if the bus of current stop is taken
                        {
                            bus_taken[bus[route][i]]=1;
                            q.push(bus[route][i]);
                        }
                    }
                }
            }
        }
        return -1;
    }
};