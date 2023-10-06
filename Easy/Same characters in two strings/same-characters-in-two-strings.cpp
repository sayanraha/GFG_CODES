//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int sameChar(string A, string B)
    {
        // code here 
        int cnt = 0;
        
        int i = 0 , j = 0, len1 = A.length(), len2 = B.length();
        if(len1 == len2){
        while(i < len1 and j < len2){
            
            char c1 = tolower(A[i++]);
            char c2 = tolower(B[j++]);
            if(c1 == c2){
                
                cnt++;
            }
            
        }}
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.sameChar(A,B)<<endl;
    }
    return 0;
}
// } Driver Code Ends