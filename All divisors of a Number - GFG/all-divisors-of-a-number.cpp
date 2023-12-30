//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int n) {
        vector<int> rem;
       for(int i=1;i<=sqrt(n);i++){
           if(n%i==0){
               if(n/i==i){
                   cout<<i<<' ';
               }
               else{
                   cout<<i<<' ';
                   rem.push_back(n/i);
               } 
           }
       }
       for(int i=rem.size()-1;i>=0;i--){
           cout<<rem[i]<<' ';
       }
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends