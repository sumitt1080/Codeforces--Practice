#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, i, j=0;
        cin>>n;
        ll a[n] , sum=0;
        for(int  i = 0; i < n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n != 0){
            cout<<"-1"<<endl;
            continue;
        }
         ll c=sum/n;
    for(int  i = 0; i < n; i++)
    {
        if(a[i]>c)
        j++;
    }
    cout<<j<<endl;
    }
}