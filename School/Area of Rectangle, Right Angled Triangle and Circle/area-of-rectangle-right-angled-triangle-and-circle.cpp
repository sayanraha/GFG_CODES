//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> getAreas(int L , int W , int B , int H , int R) {
        // code here
        
        
        int rectangle = L * W;
        int Triangle = 0.5 * B * H;
        int circle = 3.14 * R * R;
        
        return {rectangle,Triangle,circle};
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L,W,B,H,R;
        
        cin>>L>>W>>B>>H>>R;
        
        Solution ob;
        vector<int> ans = ob.getAreas(L,W,B,H,R);
        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
    }
    return 0;
}
// } Driver Code Ends