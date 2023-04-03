class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       sort(people.begin(),people.end());
        int j=people.size()-1;
       int i=0;
        int c=0;
        while(i<=j){
            if (people[i]+people[j]<=limit){
                i++;
                j--;
            }
            else
                j--;
            
            c++;
        }
        return c;
    }
};