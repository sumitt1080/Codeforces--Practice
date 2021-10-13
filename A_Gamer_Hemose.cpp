#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
    ll n, H;
    cin>>n>>H;
    vector<ll> v;
    for(int i = 0; i < n ; i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(), v.end(), greater<int>());
    ll sum = 0, cnt =0;
    for(auto x:v){
        H = H-x;
        cnt++;
        if(H<=0){
            break;
        }
    }
    cout<<cnt<<endl;
}
    return 0;
}