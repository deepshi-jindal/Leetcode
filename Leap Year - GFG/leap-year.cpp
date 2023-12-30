//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
bool leapyear(int N){
    if(N%400==0 || (N%4==0 && N%100!=0)){
        return true;
    }
    else
    return false;
}
    int isLeap(int N){
        //code here
        if(leapyear(N)){
            return 1;
        }
        else
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isLeap(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends