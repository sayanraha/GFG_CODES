//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
    bool check(int i,int j ,string &wild,string & pattern){
        
        //Base Case
        
        if(i < 0 and j < 0)//if both i and j gets exhausted then return true
        {
            return true;
        }
        if(i < 0 and j >= 0 )// if i gets exhausted but there is some characters still left in pattern string then return false.
        {
            return false;
        }
        if(j < 0 and i >= 0){
            
            for(int x = 0; x < i;x++){
                if(wild[x] != '*')
                {
                    return false;
                }
            }
            return true;
        }
        
        
        
        
        
        if(wild[i] == pattern[j] or wild[i] == '?'){
            return check(i-1,j-1,wild,pattern);
        }
        if(wild[i] == '*'){
            return check(i-1,j,wild,pattern) || check(i,j-1,wild,pattern); 
        }
        
        
    }
    bool match(string wild, string pattern)
    {
        // code here
        int n = wild.length(); // 'n' storing the size of wild string
        int m = pattern.length();// 'm' storing the size of pattern string
        
        return check(n-1,m-1,wild,pattern);
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        bool x=ob.match(wild, pattern);
        if(x)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends