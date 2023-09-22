//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int n){
        // code here
        int flag = 1;
        if(n==0 or n==1)return 0;
        
        for(int i = 2;i<=sqrt(n);i++){
            if(n % i == 0){
                flag = 0;
                break;
            }
        }
        if(flag)return 1;
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
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends