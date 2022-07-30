

void moveZeroes(int* nums, int numsSize){
    /*int count=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0)
            count++;
        else if(count>0){
            nums[i-count]=nums[i];
        nums[i]=0;
        }
    }*/
     int n=numsSize;
        if(n==0||n==1)
            return ;
        int l=0,r=0;
        int temp;
        while(r<n){
            if(nums[r]==0)
                r++;
            else{
                temp=nums[l];
            nums[l]=nums[r];
            nums[r]=temp;
            ++l;
            ++r;
            }
        }
    
}