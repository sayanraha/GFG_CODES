//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int countSubstr (string S)
	{
	    // your code here
	   /* long long int cnt = 0 , i;
	    for(int i = 0;i<S.length();i++){
	        
	        if(S[i] == '1')cnt++; // counting the number of 1's present in the string
	    }
	    
	    return (int)(cnt * ((cnt-1) / 2));// returning the required subarray using the formula.*/
	     int n= S.length();
    int numm =0;
    for(int i=0;i<n;i++){
        if(S[i] == '1'){
            numm++;
        }
    }
    int ans = numm * (numm-1)/2;
    return ans;
	}
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        
        cout << ob.countSubstr (s) << '\n';
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends