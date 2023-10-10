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
        string str1,str2;//taken two strings one for storing uppercase characters and another for lowercase
        for(int i=0;i<s.size();i++)
        {
            if(islower(s[i]))//if character is lowercase  add that character to str2
            {
                str2+=s[i];
            }
            else//if character is uppercase  add that character to str1
            {
                str1+=s[i];
            }
        }
        
        // Now we sort both the strings 
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        s="";
        int i=0,j=0,k=0;
        while(i<str1.size() and j<str2.size())
        {
            if(k%2==0)//we will store the uppercase characters in the even postion of the resultant string i.e s
            {
                s+=str1[i];
                i++;
            }
            else//Similarly we will store the lowercase characters in the odd postion of the resultant string i.e s
            {
                s+=str2[j];
                j++;
            }
            k++;// doing incremantation of k  until str1 or str2 gets exhausted
            
        }
        // Now we are looping for those strings either str1 or str2 which were not completely exhausted earlier, we will do it individually now.
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