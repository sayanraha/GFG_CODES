//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        //code here.
        vector<int> idx;
        int start_idx = 0 , end_idx = 0;
        int cnt = 0;
        
        for(int i = 0;i<n;i++){
            if(a[i]==key and cnt == 0){
                cnt++;
                start_idx = end_idx = i;
            }
            else if(a[i]==key and cnt > 0){
                end_idx = i;
            }
        }
        
        if(cnt == 0){
            idx.push_back(-1);
            idx.push_back(-1);
        }
        else{
            idx.push_back(start_idx);
            idx.push_back(end_idx);
        }
        return idx;
    }
  
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends