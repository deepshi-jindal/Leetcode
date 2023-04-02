class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
        int m=potions.size();
        
         vector<int> ans; //stores answer
        
        sort(potions.begin(), potions.end()); //sort potions for binary search
        
        for(auto it : spells)
        {
            int left=0, right=m-1, mid; //define left, right and mid pointers
            
            while(left<=right) //iterate until right is lesser than left
            {
                mid = (left+right)/2; 
                
                if((long long)it*potions[mid] >= success) right=mid-1;
                
                else left=mid+1;
            }
            ans.push_back(m-left);
        }
        return ans;
    }
};