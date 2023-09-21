class Solution {
public:
    int sumDigit(int n){
        int sum=0;
        while(n>0){
            sum+=((n%10)*(n%10));
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
      // set<int> ans;
      //   int index;
      //   int sum;
      //   while(1){
      //       sum=0;
      //       while(n){
      //           index=n%10;
      //           sum+=index*index;
      //           n=n/10;
      //       }
      //       if(sum==1)
      //           return true;
      //       else if(ans.find(sum)!=ans.end())
      //           return false;
      //       ans.insert(sum);
      //       n=sum;
      //   }
      //   return false;
        int temp=n;
		while(true){
			if(temp==89)
				return false;
			if(temp==1)
				return true;
			temp=sumDigit(temp);
		}
    }
};