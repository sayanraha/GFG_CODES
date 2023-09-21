//{ Driver Code Starts
//Initial Template for C++

// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

// User function Template for C++

class Solution {
  public:
    long double NthTerm(int N){
        // code here
        long double arr[N];
        
        arr[0] = arr[1] = 2;
        
        for(int i = 2; i < N; i+= 2){
            
            arr[i] = arr[i-2] * arr[i-2];
        }
        
         for(int i = 3; i < N; i+= 2){
            
            arr[i] = arr[i-2] * arr[i-2] * arr[i-2];
        }
        
        return arr[N-1];
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout<< fixed << setprecision(0)<<ob.NthTerm(N)<<endl;
    }
    return 0;
}

// } Driver Code Ends