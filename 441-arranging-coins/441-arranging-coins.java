
class Solution {
    public int arrangeCoins(int n) {
       long l=0;
       long r=n;
       long sum=0;
       while(l<=r){
         long mid = l + (r-l)/2;
         sum= (mid *(mid+1))/2;
         if(sum >n)
           r=mid -1;
           else if(sum<n)
           l=mid+1;
           else
            return (int)mid;
       }
       return (int)r;
    }
}