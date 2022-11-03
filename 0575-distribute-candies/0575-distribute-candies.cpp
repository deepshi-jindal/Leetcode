class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_set<int>set;
        for(int i=0;i<n;i++){
           set.insert(candyType[i]);
        }
        if(n/2<set.size()){
            return n/2;
        }
        else
            return set.size();
        
    }
};