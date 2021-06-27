#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0 ;i < n ;i++){
            a[i] = i+1;
        }
        int last = 0;
        if(n%2 == 0){
            for(int  i = 0; i<n-1 ; i+=2){
                int temp= a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }else{
            for(int  i = 0; i<n-1 ; i+=2){
                int temp= a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                last  = i+1;
            }
            swap(a[last], a[last+1]);
        }

        for(int i = 0 ;i < n ;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}