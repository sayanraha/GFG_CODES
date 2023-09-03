//{ Driver Code Starts
// To print last duplicate element and its
// index in a sorted array
#include<bits/stdc++.h>
using namespace std;

vector<int> dupLastIndex(int arr[], int n) ;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> v;
        v = dupLastIndex(a,n);
        for(int i:v)
            cout << i << " ";
        cout << endl;
        
    }
return 0;
}


// } Driver Code Ends


vector<int> dupLastIndex(int arr[], int n) {
    // Complete the function
    
    //vector<int> res;
    
    while(--n){
        
        if(arr[n] == arr[n-1] ){
            return {n,arr[n]};
        }
        
    }
    
    return {-1};
    
    }

