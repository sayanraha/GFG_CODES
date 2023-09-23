//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        int n = str.size();
		    int ans = 0, pow_2 = 1;
		    for(int i = n - 1; i >= 0; i--) {
		        if(str[i] == '1')
		            ans += pow_2;
		        pow_2*=2;
		    }
		    return ans;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends