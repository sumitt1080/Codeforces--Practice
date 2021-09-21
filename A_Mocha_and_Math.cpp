#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    int result = a[0];
    for(int i = 1; i<n;i++){
        cin>>a[i];
        result = result&a[i];
    }
    cout<<result<<endl;
    
    
}
    return 0;
}