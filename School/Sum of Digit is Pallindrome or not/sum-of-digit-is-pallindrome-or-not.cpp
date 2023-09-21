//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        // code here
        int sum = 0,d;
        int num = N;
        
        while(num > 0){
            d = num % 10;
            sum += d;
            num = num / 10;
        }
        
        int check = sum;
        int s = 0;
        while(check > 0){
            d = check % 10;
            s = s * 10 + d;
            check = check /10;
        }
        
        if(s == sum )return 1;
        
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
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends