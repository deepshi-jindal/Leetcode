class Solution {
public:
    void find_path(vector<vector<int>>& graph, vector<vector<int>> &result,vector<int> &path,int n){
        path.push_back(n);
        if(n==graph.size()-1)
            result.push_back(path);
            else
                for(int v: graph[n])
                    find_path(graph,result,path,v);
        path.pop_back();
        
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        vector<vector<int>> result;
        vector<int> path;
        find_path(graph, result, path, 0);
        return result;
    }
};