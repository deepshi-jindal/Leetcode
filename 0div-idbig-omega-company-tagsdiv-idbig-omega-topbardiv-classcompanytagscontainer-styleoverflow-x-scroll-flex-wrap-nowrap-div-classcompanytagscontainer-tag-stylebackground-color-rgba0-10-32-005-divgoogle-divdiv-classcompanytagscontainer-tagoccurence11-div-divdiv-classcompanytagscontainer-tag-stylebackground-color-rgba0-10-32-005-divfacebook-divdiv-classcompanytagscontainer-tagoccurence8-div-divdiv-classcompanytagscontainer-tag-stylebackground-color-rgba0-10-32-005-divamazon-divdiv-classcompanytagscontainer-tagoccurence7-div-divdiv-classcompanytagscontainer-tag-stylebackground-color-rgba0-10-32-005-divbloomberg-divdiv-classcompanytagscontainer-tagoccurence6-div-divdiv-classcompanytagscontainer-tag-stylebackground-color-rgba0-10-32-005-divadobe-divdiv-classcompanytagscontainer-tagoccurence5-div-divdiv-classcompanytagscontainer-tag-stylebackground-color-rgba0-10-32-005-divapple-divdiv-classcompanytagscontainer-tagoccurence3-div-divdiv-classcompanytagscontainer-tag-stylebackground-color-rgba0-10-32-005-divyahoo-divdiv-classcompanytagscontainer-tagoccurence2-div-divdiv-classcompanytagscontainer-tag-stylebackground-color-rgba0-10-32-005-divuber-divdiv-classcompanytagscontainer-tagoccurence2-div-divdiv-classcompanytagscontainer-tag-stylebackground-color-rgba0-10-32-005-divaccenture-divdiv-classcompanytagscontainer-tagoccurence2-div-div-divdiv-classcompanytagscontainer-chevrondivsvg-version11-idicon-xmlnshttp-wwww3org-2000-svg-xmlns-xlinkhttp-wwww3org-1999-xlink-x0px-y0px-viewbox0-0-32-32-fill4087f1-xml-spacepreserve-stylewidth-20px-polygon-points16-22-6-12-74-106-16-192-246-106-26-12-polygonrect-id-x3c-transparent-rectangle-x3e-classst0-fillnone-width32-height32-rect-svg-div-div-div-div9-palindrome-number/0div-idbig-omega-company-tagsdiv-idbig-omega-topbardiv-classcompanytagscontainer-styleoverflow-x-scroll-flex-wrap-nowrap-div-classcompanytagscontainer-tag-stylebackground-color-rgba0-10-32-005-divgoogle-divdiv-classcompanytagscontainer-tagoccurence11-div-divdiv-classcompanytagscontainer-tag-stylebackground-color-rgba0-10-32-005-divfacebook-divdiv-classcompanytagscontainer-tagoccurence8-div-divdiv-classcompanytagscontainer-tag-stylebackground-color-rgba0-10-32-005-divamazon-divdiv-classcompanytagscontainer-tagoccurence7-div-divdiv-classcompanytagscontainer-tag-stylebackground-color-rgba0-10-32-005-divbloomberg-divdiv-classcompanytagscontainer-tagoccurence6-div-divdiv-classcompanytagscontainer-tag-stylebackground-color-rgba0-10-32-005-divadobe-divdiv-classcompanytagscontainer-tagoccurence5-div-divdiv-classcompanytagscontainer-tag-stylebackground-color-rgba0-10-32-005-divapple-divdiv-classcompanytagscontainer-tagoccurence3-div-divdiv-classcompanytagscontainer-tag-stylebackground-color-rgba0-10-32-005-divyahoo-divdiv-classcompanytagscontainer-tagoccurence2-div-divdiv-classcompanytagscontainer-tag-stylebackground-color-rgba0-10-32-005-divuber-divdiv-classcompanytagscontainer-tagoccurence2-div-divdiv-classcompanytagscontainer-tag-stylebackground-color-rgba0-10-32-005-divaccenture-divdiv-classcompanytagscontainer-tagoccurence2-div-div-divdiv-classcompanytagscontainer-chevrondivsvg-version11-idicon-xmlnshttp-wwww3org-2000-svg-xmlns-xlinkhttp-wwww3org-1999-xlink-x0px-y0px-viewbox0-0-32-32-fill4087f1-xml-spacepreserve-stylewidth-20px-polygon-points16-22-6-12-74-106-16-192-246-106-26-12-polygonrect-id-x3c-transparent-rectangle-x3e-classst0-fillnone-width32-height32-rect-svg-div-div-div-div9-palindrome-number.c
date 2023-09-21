

bool isPalindrome(int x) {
//    if(x<0)
//        return false;
//     long reverse=0;
//     long num=x;
//     while(num>0){
     
//         reverse=reverse*10+num%10;
//         num=num/10;
//     }
//     return (reverse==x);
    if(x<0)
        return false;
    long reverse=0;
    long num=x;
    while(num>0){
        int r=num%10;
        reverse=reverse*10+r;
        num=num/10;
    }
    return (reverse==x);
}