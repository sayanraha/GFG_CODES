#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(pair<int,int>a ,pair<int,int>b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second>b.second;
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>m;
    for(int i=0;i<n;i++){
       m[a[i]]++; 
    }
    vector<pair<int,int>>v;
    for(auto &i:m){
        v.push_back({i.first,i.second});
    }
    sort(v.begin(),v.end(),comp);
    for(auto i:v){
        int x=i.first;
        int f=i.second;
        while(f--){
            cout<<x<<" ";
        }
    }
   cout<<endl; 
}
}