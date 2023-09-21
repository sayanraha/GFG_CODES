//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long oddGame(long long N) {
     
        // code here
        
        if(N==1)return N;
        
        long res = 2;
        
        while(res < N){
            res = res * 2;
        }
        if(res > N){
            return res / 2;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.oddGame(N) << endl;
    }
    return 0;
}
// } Driver Code Ends