//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
void subs(int i,int s,vector<int>&arr,vector<int>&sum,int N){
    if(i==N)
    {
        sum.push_back(s);
        return;
    }
    subs(i+1,s+arr[i],arr,sum,N);
    subs(i+1,s,arr,sum,N);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>sum;
        subs(0,0,arr,sum,N);
        sort(sum.begin(),sum.end());
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends