#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll i =1, count =0 ;
    
    while(count!=n){
        if((i%3!=0)&&(i%10 != 3)){
            count++;
        }
        i++;
    }
    cout<<i-1<<endl;
}
    return 0;
}