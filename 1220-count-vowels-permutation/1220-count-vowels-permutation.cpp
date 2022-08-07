class Solution {
public:
    int countVowelPermutation(int n) {
        long a=1 ,e=1, i=1, o=1, u=1;
        long mod= pow(10,9)+7;
        for(int j=2;j<=n;j++){
            long a2=(e +i+ u)% mod;
            long e2=(a+i)%mod;
            long i2=(e+o)%mod;
            long o2=(i);
            long u2=(i+o)%mod;
            
            a=a2,e=e2,i=i2,o=o2,u=u2;
        }
        return(a+e+i+o+u)%mod;
    }
};