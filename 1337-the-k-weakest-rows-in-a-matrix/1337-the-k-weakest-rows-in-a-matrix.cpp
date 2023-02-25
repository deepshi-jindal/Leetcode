class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
       /* vector<int> res;
        vector<pair<int,int>> a;
        int r=mat.size();
     //   int c=mat[i].size();
       
        for(int i=0; i<r ;i++){
               int count=0;         
            for(int j=0; j< mat[i].size();j++){
                if(mat[i][j]==1)
                    count++;
                
            }
            a.push_back(make_pair(count,i));
        }
        sort(a.begin(),a.end());
        for(int i=0;i<k;i++){
            res.push_back(a[i].second);
        }
        return res;*/
        vector<int>res;
        vector<pair<int,int>>a;
        int r=mat.size();
        int c=mat[0].size();
        for(int i=0;i<r;i++){
            int count=0;
            for(int j=0;j<c;j++){
                if(mat[i][j]==1)
                    count++;
            }
            a.push_back({count,i});
        }
        sort(a.begin(),a.end());
        for(int i=0;i<k;i++){
            res.push_back(a[i].second);
        }
        return res;
    }
};