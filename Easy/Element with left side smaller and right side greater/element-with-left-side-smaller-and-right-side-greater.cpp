//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    int gr[n],sm[n];
    gr[0] = arr[0];
    for(int i = 1;i < n;i++){
        gr[i] = max(arr[i],gr[i-1]);
    }
    sm[n-1] = arr[n-1];
    for(int i = n-2;i >= 0;i--){
        sm[i] = min(sm[i+1],arr[i]);
    }
    for(int i = 1;i < n-1;i++){
        if(gr[i] <= arr[i] and sm[i] >= arr[i]){
            return arr[i];
        }
    }
    return -1;
}