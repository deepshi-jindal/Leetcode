//not optimum solution runtime is higher as value of constraints is large 
/*class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            if(i%2!=0)
                count++;

        }
        return count;
    }
};*/

class Solution {
public:
    int countOdds(int low, int high) {
        int k = (high-low)/2;
        if(high%2!=0 || low%2!=0){
            k+=1;
        }
        return k;
    }
};