#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n ; 
        cin>>n;
        n=n*2;
        int a[n];
        int even= 0, odd =0;
        for(int i = 0; i< n; i++){
            cin>>a[i];
            if(a[i] % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even == odd){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}