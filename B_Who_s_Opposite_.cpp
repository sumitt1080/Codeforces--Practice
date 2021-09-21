#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans = 0;
    if((a+1 == b) || (a-1 == b)){
        ans = -1;
    }
    else if(max(a,max(b,c))>(2*abs(b-a))){
        ans = -1;
    }else{
        ll n = abs(b-a);
        if(c+n > 2*n){
            ans = c-n;
        }else{
            ans = c+n;
        }
    }
    cout<<ans<<endl;
}
    return 0;
}