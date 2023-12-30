class Solution {
public:
    bool isPerfectSquare(int num) {
       if(num==1)
           return true;
        long l=1;
        long r=num/2;
        while(l<=r){
          long mid=l+(r-l)/2;
            long sq=mid*mid;
            if(sq==num)
                return true;
           else if(sq<num){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return false;
       
            
        }
    
};