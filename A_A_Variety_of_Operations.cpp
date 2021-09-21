#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
    ll c,d;
    cin>>c;
    cin>>d;
    int ans;
    if(c==0 && c==d){
        ans = 0;
    }else if(c==d){
        ans = 1;
    }else if(abs(c-d)%2 == 0){
        ans = 2;
    }else{
        ans = -1;
    }
    cout<<ans<<endl;
}
    return 0;
}