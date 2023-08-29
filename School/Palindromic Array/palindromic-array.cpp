//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int checkPalindrome(int val){
        int v = val;
        int s = 0,d;
        while(v > 0){
            d = v % 10;
            s = s * 10 + d;
            v = v / 10;
        }
        if(s==val)return 1;
        else return 0;
    }
    int PalinArray(int a[], int n)
    {
    	// code here
    	int flag = 0;
    	for(int i = 0;i<n;i++){
    	    if(checkPalindrome(a[i]))
    	        flag = 1;
    	    else{
    	        flag = 0; return flag;}
    	}
    	return flag;
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
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends