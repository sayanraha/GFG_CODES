//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string isDeficient(long long int x) {
        // code here
       // vector<long long int> divisors;
        
        long long int i,sum = 0;
        
        for(i = 1;i<=x;i++){
            if(x % i == 0){
               // divisors.push_back(i);
                sum += i;
            }
        }
        
        if(sum < 2 * x)
        {
            return "YES";
        }
        else{
            return "NO";
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int x;
        cin >> x;
        Solution ob;
        cout << ob.isDeficient(x) << endl;
    }
    return 0;
}

// } Driver Code Ends