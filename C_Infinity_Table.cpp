#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define ll long long
#define ld long double

int main()
{
int t;
cin>>t;
while(t--){
    ll k;
    cin>>k;
    ll r;
    ll ans = ceil((double) sqrt(k));
    ll result = sqrt(k);
    ll rofa=0;
    result*= result;
    ll zofa=5;
    if(k-result == 0)
        cout<<ans<<" "<<1<<endl;
    else if(k-result<=ans)
        cout<<k-result<<" "<<ans<<endl;
    else{
        ll rest = ans*ans;
        cout<<ans<<" "<<rest-k+1<<endl;
    }


}
    return 0;
}