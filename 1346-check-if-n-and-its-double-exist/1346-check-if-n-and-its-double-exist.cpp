class Solution {
public:
   /* bool checkIfExist(vector<int>& arr) {
     //  vector<int> res;
        sort(arr.begin(),arr.end());
        for(int i =0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(i!=j){
                    if(arr[i]==2*arr[j]){
                return true;
                    }
                }
            }
          
        }
        return false;
            
    }
};*/


	bool checkIfExist(vector<int>& arr) {
		sort(arr.begin(), arr.end());
		int start, end;
		for(int i = 0; i<= arr.size()-1; i++){
			int target = arr[i];
			if (target < 0){
				start = 0;
				end = i - 1;
			}
			else{
				start = i + 1;
				end = arr.size() - 1;
			}
			while(start <= end){
				int mid = start + (end - start)/2;
				if(target*2 == arr[mid]) return true;
				else if(target*2 < arr[mid]) end = mid - 1;
				else start = mid + 1;
			}
		}
		return false;
	}
};