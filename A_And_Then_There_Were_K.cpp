#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    
    while(t--){
        ll n;
        cin>>n;
        
        ll s = log2(n);
        s = pow(2, s);
        cout<<s-1<<endl;
    }
}