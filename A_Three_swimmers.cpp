#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll computeWaitTime(ll p, ll x) {
    return (x - p % x) % x;
  }

ll solve(ll p, ll a, ll b, ll c) {
    return min(min(computeWaitTime(p, a), computeWaitTime(p, b)), computeWaitTime(p, c));
  }

int main(){
    int t;
    cin>>t;
    while(t--){
        ll p, a, b, c;
        cin>>p>>a>>b>>c;

        ll A, B, C;
    A = a - p % a;
    
    if (A == a)
    {
      A = 0;
    }
    B = b - p % b;
    
    if (B == b)
    {
      B = 0;
    }
    C = c - p % c;
    
    if (C == c)
    {
      C = 0;
    }
    ll ans = min(A,B);
    
    ans= min (ans,C);
    
    cout <<ans << "\n";
        
    }
}



