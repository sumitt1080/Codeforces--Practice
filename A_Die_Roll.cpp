#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll y, w;
    cin>>y>>w;
    ll x = (y>w)?y:w;
    ll count = 0;
    for(int i = x; i<=6;i++){
        count++;
    }
    if(6 % count == 0){
        cout<<1<<"/"<<(6/count)<<endl;
    }
    else if(count%2 == 0){
        cout<<(count/2)<<"/"<<3<<endl;
    }
    else{
        cout<<count<<"/"<<6<<endl;
    }
}