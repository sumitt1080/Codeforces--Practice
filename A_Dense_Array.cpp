#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n ; 
        cin>>n;
        int a[n];
        int c = 0;
        for(int i = 0; i<n ;i++){
            cin>>a[i];
        }
        for(int i = 0; i< n-1; i++){
            int mi = min(a[i], a[i+1]);
            int ma = max(a[i], a[i+1]);
            while(ma>mi*2){
                mi = mi*2;
                c++;
            }

        }
        cout<<c<<endl;
    }
}