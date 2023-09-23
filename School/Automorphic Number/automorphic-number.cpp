//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		string is_AutomorphicNumber(int n)
		{
		    // Code here
		    
		    if(n%10==n*n%10)return "Automorphic";
		    
            return "Not Automorphic";
		    
		    
		    
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_AutomorphicNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends