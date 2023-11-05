class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int winner=arr[0];
        int win=0;
        for(int i=1;i<arr.size();i++){
            if(winner>arr[i]){
                win+=1;
            }
            else{
                win=1;
                winner=arr[i];
            }
            if(win==k)
                break;
        }
        return winner;
    }
};