//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int A[], int n){
        // Code here
        vector<int> ans;
       /* for(int i=0;i<=n-1;i++){
            if(a[i+1]>=a[i]){
              res.push_back(a[i+1]);
            }
        if(i==n-1){
            res.push_back(a[i]);
        }
        }
        return res;
        int max=a[n-1];
        ans.push_back(max);
        for(int i=0;i<=n-1;i++){
            if(a[i+1]>=a[i]){
             ans.push_back(a[i+1]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;*/
        vector<int> v;
int maxi=INT_MIN;
for(int i=n-1;i>=0;i--)
{
    if(A[i] >= maxi) v.push_back(A[i]);
    maxi = max(maxi,A[i]);
}
reverse(v.begin(),v.end());
return v;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends