#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t=1;
    //cin>>t;
    while(t--){
       int n,q;
        cin>>n>>q;
 
        string s;
        cin>>s;
 
        ll a[n+1];
        a[0]=0;
 
        for (int i = 1; i < n+1; i++)
        {
            a[i]= a[i-1]+ ((s[i-1]-'a' + 1));
        }
 
        while (q--)
        {
            int l,r;
            cin>>l>>r;
 
            cout<<a[r]-a[l-1]<<"\n";
        }
    }
}