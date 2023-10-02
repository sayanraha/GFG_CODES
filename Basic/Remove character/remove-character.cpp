//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        // code here
        string res = "";
        
        for(int i = 0;i < str1.length();i++){
            bool flag = true;
            for(int j = 0; j < str2.length();j++){
                if(str1[i] == str2[j])
                    flag = false;
            }
            if(flag == true)
                res += str1[i];
        }
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}

// } Driver Code Ends