#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        int min = INT_MAX;
        
        for(int i = 0; i<n;i++){
            cin>>v[i];
            if(v[i]<min)
                min=v[i];
        }

        map<int, int> mp;
        for(int i=0; i<v.size(); i++){
            mp[v[i]]++;
        }
        
        int min1;
        for(auto& it: mp){
            if(it.first == min)
                min1=it.second;
                
        }

        int k =min1;
        
        cout<<n-k<<endl;
    }
}