#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll sum = 0;
        sum = (a+b)/4;
        ll minimum1 = min(a,b);
        ll minimum2 = min(b,sum);
        ll minimum3 = min(a,minimum2);
        if(minimum1>=sum)
            cout<<sum<<endl;
        else
            cout<<minimum3<<endl;
    }
}