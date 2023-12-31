//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
            // code here 
            
            vector<int> v;
            
            int i = 0 , j = 0;
            
            while(i<n and j < n){
                
                if(ar1[i] <= ar2[j]){
                    v.push_back(ar1[i]);
                    i++;
                }
                else{
                    v.push_back(ar2[j]);
                    j++;
                }
                
            }
            
            while(j < n){
                v.push_back(ar2[j++]);
            }
            
            while(i < n){
                v.push_back(ar1[i++]);
            }
            
            
            int len = v.size();
            
            int mid =  (len-1)/2;
            
            int sum = v[mid] + v[mid+1];
            
            return sum;
            
            
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends