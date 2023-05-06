#define MOD 1000000007
class Solution {
public:
    long power(int x,int y){
        if(y==1) return x;
        if(y==0) return 1;
       // if(x==0) return 0;
        long ans=1;
        if(y%2==0){
            ans=power(x,y/2);
            ans*=ans;
        }
        else{
           ans=power(x,y-1);
            ans*=x;
           
        }
        return ans%MOD;
    }
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int s=0,l=nums.size()-1;
        while(s<=l){
            if(nums[s]+nums[l]<=target){
                ans+=(power(2,l-s));
                ans%=MOD;
                s++;
            }
            else{
                l--;
            }
        }
        return ans;
    }
};