#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a1, a2, a3;
        cin>>a1>>a2>>a3;
        ll result = (a1+a3)-(2*a2);
        if(result%3 == 0)
            cout<<'0'<<endl;
        else
            cout<<'1'<<endl;
    }
}