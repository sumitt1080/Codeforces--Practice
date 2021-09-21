#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        ll result=0;
        string s;
        cin>>n>>s;
        for(int i = 0; i< n; i++){
            if(s[i]!='0'){
                result+=int(s[i]-'0');
                if(i!=n-1){
                    result++;
                }
            }
        }
        cout<<result<<endl;
    }
    return 0;
}