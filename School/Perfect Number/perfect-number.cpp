//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int factorial(int x){
      int fact = 1;
      
      for(int i = x;i >= 1;i--){
          
          fact = fact * i;
      }
      return fact;
      
  }
    int isPerfect(int N) {
        // code here
        int num = N,d,sum = 0;
        
        while(num > 0){
            d = num % 10;
            sum += factorial(d);
            num /= 10;
        }
        
        if(sum == N)return 1;
        else return 0;
        
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
        cout << ob.isPerfect(N) << "\n";
    }
}

// } Driver Code Ends