class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat)
    {
        int h = mat.size(), w = mat[0].size(), tmp[min(w, h)], pos = 0;
        for (int d = 2 - h, lmtD = w - 1; d < lmtD; d++)
        {
            for (int cx = max(0, d), lmtX = min(w, h + d); cx < lmtX; cx++)
                tmp[pos++] = mat[cx - d][cx];
            sort(tmp, tmp + pos, greater<int>());
            for (int cx = max(0, d), lmtX = min(w, h + d); cx < lmtX; cx++)
                mat[cx - d][cx] = tmp[--pos];
        }
        return mat;
    }
};