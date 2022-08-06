class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.rbegin(),s.rend());
        sort(g.rbegin(),g.rend());
        int n=g.size();
        int m=s.size();
        int curr=0;
        int total=0;
        for(int i=0;i<n;i++){
            if(curr<m && g[i]<=s[curr]){
                total++;
                curr++;
            }
        }
        return total;
    }
};