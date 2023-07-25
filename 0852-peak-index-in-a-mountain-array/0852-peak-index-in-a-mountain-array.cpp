class Solution {
public:
    /*int peakIndexInMountainArray(vector<int>& arr) {
       /int n=arr.size()-1;
        int low=0;
        int high=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid-1]<arr[mid]&& arr[mid+1]<arr[mid])
                return mid;
            if(arr[mid-1]<arr[mid]&&arr[mid+1]>arr[mid])
                low=mid;
            else
                high=mid;
        }
        return -1;
       int n=arr.size()-1;
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid+1]>arr[mid]){
                high=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;*/
        
    

int peakIndexInMountainArray(vector<int>& arr) {
     int start =0 , end = arr.size() - 1;
        int mid = start + (end - start )/2;
        
        while(start <= end ){
            
            mid = (end - start) / 2 + start;
            if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) return mid;
            else if (arr[mid] < arr[mid + 1]) start = mid + 1;
            else if (arr[mid] < arr[mid - 1]) end = mid - 1;
        }
        return -1;
    }
};
