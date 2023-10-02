//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



string transform(string str)
{
    // code here
    
    int len = str.length();
    
    for(int i = 0;i < len; i++){
        if(i == 0 and islower(str[i])){
            str[i] = toupper(str[i]);
        }
        if(i > 0 and str[i -1 ] == ' ' and islower(str[i])){
            str[i] = toupper(str[i]);
        }
    }
    return str;
}