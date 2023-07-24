class Solution {
public:
    double myPow(double x, int n) {
        // double y=(double)pow(x,n);
        // return y;
        if(n==0)
            return 1;
       // x^n=x^n/2*x^n/2
        double y=myPow(x,n/2);
        if(n%2==0)
            return y*y;
        else if(n>0)
            return x*y*y;
        else
            return (1/x)*y*y;
    }
};