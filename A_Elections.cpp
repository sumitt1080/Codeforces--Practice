#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    ll maximum=max(max(a,b),c);
    ll ct=(a==maximum)+(b==maximum)+(c==maximum);
    if(a==maximum && ct==1)
        cout<<"0 ";
    else
        cout<<maximum-a+1<<" ";
    if(b==maximum && ct==1)
        cout<<"0 ";
    else
        cout<<maximum-b+1<<" ";
    if(c==maximum && ct==1)
        cout<<"0"<<endl;
    else
        cout<<maximum-c+1<<endl;
    }
}
