#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
    ll n,m,q;
    cin>>n>>m>>q;
    int count = 0, flag = 0;
    ll a[q];
    for(int i = 0; i< q; i++){
        cin>>a[i];
    }
    for(int i = 0; i<q;i++){
        
        if(a[i]>0){
            count++;
            
            if(count>m){
                flag = 1;
                break;
            }
            continue;
            cout<<endl;
        }else{
            count--;
            
        }
        
    }
   
    if(flag == 0){
            cout<<"Consistent"<<endl;
        }
        else{
            cout<<"Inconsistent"<<endl;
        }
}
    return 0;
}