//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    int firstElement(int n) 
    {
        // code here
        
        if(n==1 or n==2)return 1;
        
        int mod = 1e9+7;
        
        int a = 1,b = 1, c = a+b;
        
        for(int i = 1; i < n-1; i++){
            
            c = (a+b)%mod;
            
            a = b;
            
            b = c;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n;
        cin >> n ;
        Solution ob;
        cout<<ob.firstElement(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends