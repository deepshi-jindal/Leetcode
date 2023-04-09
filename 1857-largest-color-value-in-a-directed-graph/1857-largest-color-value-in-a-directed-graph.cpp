class Solution {
public:
  
        int largestPathValue(string s, vector<vector<int>>& edges) {
    vector<vector<int>> res(s.size()), cnt(s.size(), vector<int>(26));
    vector<int> indegree(s.size());
    for (auto &e: edges) {
        res[e[0]].push_back(e[1]);
        ++indegree[e[1]];
    }
    vector<int> q;
    for (int i = 0; i < s.size(); ++i)
        if (indegree[i] == 0)
            q.push_back(i);
    int ans = 0, process = 0;
    while (!q.empty()) {
        vector<int> q1;
        for (auto i : q) {
            ++process;
            ans = max(ans, ++cnt[i][s[i] - 'a']);
            for (auto j : res[i]) {
                for (auto k = 0; k < 26; ++k)
                    cnt[j][k] = max(cnt[j][k], cnt[i][k]);
                if (--indegree[j] == 0)
                    q1.push_back(j);
            }
        }
        swap(q, q1);
    }
    return process != s.size() ? -1 : ans;
    }
};