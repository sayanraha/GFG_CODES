//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string func(int num ,unordered_map<int,vector<string>> &mp){
        
        if(num == 0)return "";
        
        if(num < 20) return mp[1][num] ;
        string ans = "";
        
        if(num < 100){
            ans += mp[2][ num/10 ] ;
            
            if(num%10 > 0){
                ans+=" ";
                ans+=func(num%10 , mp);
            }
            
            return ans;
        }
        ans += mp[1][num/100] + " hundred";
        if(num%100 != 0){
            ans += " and ";
        }
        
        ans+= func(num%100 ,mp);
        
        return ans;
        
    }
    string convertToWords(long n) {
        if(n==0)return "zero";
        
        unordered_map<int,vector<string>> mp;
        mp[1] ={"","one","two","three","four","five","six","seven","eight","nine",
        "ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen",
        "seventeen","eighteen","nineteen"} ;
        
        mp[2] ={"","","twenty" , "thirty" , "forty" ,"fifty","sixty","seventy",
        "eighty","ninety"}; 
        
        vector<string> thous ={"thousand","lakh","crore"};
        
        string ans="";
        int f1 = n%100;
        n/=100;
        //and condition
        if(f1!=0){
            ans = func(f1,mp);
            if(n > 0) ans = "and "+ans;
        }
        int f2 = n%10;
        n/=10;
        //hundred condition
        if(f2 != 0){
            string tem = func(f2, mp)+" hundred" ;
            if(f1!=0){
                tem+=" ";
            }
            ans = tem+ans;
        }
        

        int i=0;
        while(n > 0){
            
            int f = n%100;
            if(f != 0){
                
                string s = func(f , mp );
                if(ans.size()==0){
                    ans = s+" "+ thous[i] ;
                }
                else{
                    ans = s +" "+ thous[i]+" " + ans;
                }
                
            }
            i++;
            n/=100;
        }
        return ans;
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        Solution ob;
        auto ans = ob.convertToWords(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends