class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int maximum=INT_MIN;
        for(int i=0;i<n;i++){
            int l=i,r=m-1;
            while(l<=r){
                int mid=(l+r)/2;
                if(nums1[i]<=nums2[mid]){
                 maximum=max(mid-i,maximum);
                    l=mid+1;
                }           
                else if(nums1[i]>=nums2[mid])
                    r=mid-1;
            }
        }
        return maximum==INT_MIN ? 0:maximum;
    }
};