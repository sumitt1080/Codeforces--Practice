#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
    ll n,a,b;
    ll sum=0;
    string str;
    cin>>n>>a>>b;
    cin>>str;
    for(int i = 0; i<str.length(); i++){
        if(str[i]=='0'){
            sum+=a;
        }else{
            sum+=b;
        }
    }
    cout<<sum<<endl;

}
    return 0;
}

