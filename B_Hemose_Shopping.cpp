#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
    ll n;
    ll x; 
    cin>>n;
    cin>>x;
    int output=1; 
    vector<pair<int,int>>vec(n); 
    for(auto &a : vec) 
        cin>>a.first,a.second=output++; 
    sort(vec.begin(), vec.end()); 
    output=1; 
    int cnt = 0;
    for(auto compare : vec){ 
        if(compare.second==output){ 
            output++;continue; 
        } 
        if(compare.second-output>=x) 
            output++; 
        else if(n-compare.second>=x or compare.second-1>=x){ 
            output++; 
        } 
        else{ 
            cnt = 1;
        } 
    } 
    if(cnt == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
    return 0;
}