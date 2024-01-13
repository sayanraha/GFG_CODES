//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
    
public:

    void helperFunc(int index,int sum,vector<int> &arr,int N,vector<int> &result){
        if(index == N){
            result.push_back(sum);
            return;
        }
        
        helperFunc(index+1,sum + arr[index],arr,N,result);
        helperFunc(index+1,sum,arr,N,result);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int index = 0;
        int sum = 0;
        vector<int> result ;
        helperFunc(index,sum,arr,N,result);
        sort(result.begin(),result.end());
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends