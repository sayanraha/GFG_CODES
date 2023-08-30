//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        
        int cnt;
        if(arr[0]==0){
            return n;
        }
        int low = 0,high = n-1,mid;
        
        while(low<= high){
            mid = (low+high)/2;
            
           if(arr[mid]==0 and arr[mid-1]== 1){
               cnt = n-mid;
               return cnt;
           }
           else if(arr[mid]==1){
               low = mid + 1;
           }
           else{
               high = mid - 1;
           }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends