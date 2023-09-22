//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isLeap(int n){
        //code here
        int check = (n % 4 == 0 and n % 100 != 0) or (n % 400 == 0) ? 1 : 0;
        
        if(check)return 1;
        else return 0;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isLeap(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends