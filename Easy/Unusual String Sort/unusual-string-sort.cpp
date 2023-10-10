//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string stringSort (string s)
    {
        //code here.
        string str1,str2;
        for(int i=0;i<s.size();i++)
        {
            if(islower(s[i]))
            {
                str2+=s[i];
            }
            else
            {
                str1+=s[i];
            }
        }
        
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        s="";
        int i=0,j=0,k=0;
        while(i<str1.size() and j<str2.size())
        {
            if(k%2==0)
            {
                s+=str1[i];
                i++;
            }
            else
            {
                s+=str2[j];
                j++;
            }
            k++;
            
        }
        
        while(i<str1.size())
        {
                s+=str1[i];
                i++;
            
            
        }
        
        while(j<str2.size())
        {
                s+=str2[j];
                j++;
        }
        
        
       return s;
    }
};

//{ Driver Code Starts.
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.stringSort (s) << endl;
    }
}

// Contributes By: Pranay Bansal
// } Driver Code Ends