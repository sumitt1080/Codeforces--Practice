#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
    ll n, x, t;
    cin>>n>>x>>t;
    ll z = t/x;
    if(z>n){
        cout<<(n-1)*(n)/2<<endl;
    }
    else{
        ll ans = n*z;
        ans-= (z*(z+1))/2;
        cout<<ans<<endl;
    }
}
    return 0;
}