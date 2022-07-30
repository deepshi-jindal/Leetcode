class Solution {
public:
    bool isHappy(int n) {
      set<int> ans;
        int index;
        int sum;
        while(1){
            sum=0;
            while(n){
                index=n%10;
                sum+=index*index;
                n=n/10;
            }
            if(sum==1)
                return true;
            else if(ans.find(sum)!=ans.end())
                return false;
            ans.insert(sum);
            n=sum;
        }
        return false;
    }
};