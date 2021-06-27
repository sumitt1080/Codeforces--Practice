#include<bits/stdc++.h>

using namespace std;

#define ll long long 

int main(){
    int t; 
    cin>>t;
    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;
        ll mn = x-1+(y-1)*(x);
        ll mx = y-1+(x-1)*(y);

        if(mn>mx){
            swap(mn, mx);
        }
        if(k>=mn && k<=mx)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}