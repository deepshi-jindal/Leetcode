class Solution {
public:
    int minFlips(int a, int b, int c) {
        int x,y,z,count=0;
        for(int i=0;i<32;i++){
            x= a & (1<<i);
            y= b & (1<<i);
            z= c & (1<<i);
            
            if(x==0 && y==0 && z!=0){
                count+=1;
            }
            if(x!=0 && y==0 && z==0){
                count+=1;
            }
            if(y!=0 && x==0 && z==0){
                count+=1;
            }
            if(x!=0 && y!=0 && z==0){
                count+=2;
            }
        }
        return count;
    }
};