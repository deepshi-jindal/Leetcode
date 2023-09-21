class Solution {
public:
   
    int addDigits(int n) {
        int sum=0;
     if(n==0){
         return 0;
     }
     
        while(n>0){
            int r=n%10;
            sum+=r;
            n=n/10;
        }
        if(sum<10){
            return sum;
        }
        else{
            return addDigits(sum);
        }
    }
};