#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
    int n, p, x;
    cin>>n>>p>>x;
    int ans = 0;

    int q = p%x;
    q--;

    int s = (((n-1)/x)*x);
    s = n-1-s;
    if(q>s){
        ans+=(s+1)*((n-1)/x+1)+ (q-s)*((n-1)/x);
    }else{
        ans+=((n-1)/x+1)*(q+1);
    }
    for(int i = q+1;i<=n-1;i+=x){
        ans++;
        if(i==p){
            cout<<ans<<endl;
            break;
        }
    }
}
    return 0;
}