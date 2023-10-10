//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



string maximumFrequency(string s);

int main()
{
    int t;cin>>t;
    cin.ignore();

    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        
        cout << maximumFrequency(s) << endl;

    }
    return 0;
}

// } Driver Code Ends


string maximumFrequency(string s){
        // Complete the function
        
        map<string,int> mp;
      int i=0;
      int fre=0;
      while(i<s.size()){
          string temp="";
          while(i<s.size() && s[i]!=' '){
              temp+=s[i++];
          }
          mp[temp]++;
          fre=max(fre,mp[temp]);
          i++;
      }
      int j=0;
      while(j<s.size()){
          string tem="";
          while(j<s.size()&& s[j]!=' '){
              tem+=s[j++];
          }
          if(mp[tem]==fre){
              return tem+" "+to_string(fre);
          }
          
          j++;  
      }
      return "";
}

