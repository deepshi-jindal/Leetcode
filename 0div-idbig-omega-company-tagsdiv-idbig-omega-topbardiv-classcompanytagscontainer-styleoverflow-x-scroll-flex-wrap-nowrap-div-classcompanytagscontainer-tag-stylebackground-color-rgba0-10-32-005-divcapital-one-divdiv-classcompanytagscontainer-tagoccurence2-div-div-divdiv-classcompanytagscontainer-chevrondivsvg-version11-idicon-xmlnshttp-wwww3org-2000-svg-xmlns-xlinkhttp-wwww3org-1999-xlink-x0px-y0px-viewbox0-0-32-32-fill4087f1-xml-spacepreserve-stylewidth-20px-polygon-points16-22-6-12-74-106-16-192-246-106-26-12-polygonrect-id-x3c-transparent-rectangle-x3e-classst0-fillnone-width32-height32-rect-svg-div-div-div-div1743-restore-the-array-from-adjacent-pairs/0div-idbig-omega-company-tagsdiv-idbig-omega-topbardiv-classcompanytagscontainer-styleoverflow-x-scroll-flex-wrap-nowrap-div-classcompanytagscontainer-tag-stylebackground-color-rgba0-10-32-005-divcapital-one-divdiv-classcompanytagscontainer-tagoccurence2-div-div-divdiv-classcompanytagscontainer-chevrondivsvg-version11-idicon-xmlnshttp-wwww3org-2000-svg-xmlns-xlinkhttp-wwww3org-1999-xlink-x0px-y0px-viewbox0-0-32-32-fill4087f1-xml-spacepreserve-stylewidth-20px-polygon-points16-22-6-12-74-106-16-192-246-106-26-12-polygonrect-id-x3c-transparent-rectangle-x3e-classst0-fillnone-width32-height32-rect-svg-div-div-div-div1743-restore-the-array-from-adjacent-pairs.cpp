class Solution {
public:
    vector<int>ans;
    unordered_map<int, vector<int>>gr;
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        for(auto it:adjacentPairs){
            gr[it[0]].push_back(it[1]);
              gr[it[1]].push_back(it[0]);
        }
        int startnode=-1e6;
        for(auto nodepair:gr){
            if(nodepair.second.size()==1){
                ans.push_back(nodepair.first);
                ans.push_back(nodepair.second[0]);
                break;
            }
        }
        while(ans.size()<gr.size()){
            int lastelement=ans[ans.size()-1],secondlastelement=ans[ans.size()-2];
            vector<int>res=gr[lastelement];
            if(res[0]!=secondlastelement){
                ans.push_back(res[0]);
            }
            else{
                ans.push_back(res[1]);
            }
        }
        return ans;
    }
};