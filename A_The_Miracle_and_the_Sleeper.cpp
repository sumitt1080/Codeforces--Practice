#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
    ll int l,r;
    cin>>l>>r;
    ll int max =r/2;
    ll int result = 0;
    if(l>(r/2)){
        result = r%l;
        cout<<result<<endl;
    }
    else{
        result = r%((r/2)+1);
        cout<<result<<endl;
    }


}
    return 0;
}