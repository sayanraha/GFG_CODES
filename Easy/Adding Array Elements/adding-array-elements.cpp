//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        // code here
        
        priority_queue<int, vector<int> , greater<int>> pq; // Min Heap
        
        int cnt = 0;
        
        for(int  i = 0;i < n;i++){
            
            pq.push(arr[i]);
        }
        
        while(pq.size() > 1 and pq.top() < k){
            int min1 = pq.top();
            pq.pop();
            
            int min2 = pq.top();
            pq.pop();
            
            int sum = min1 + min2;
            
            pq.push(sum);
            cnt++;
        }
        
        if(pq.top() < k) return -1;
        
        return cnt;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        int ans = obj.minOperations(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends