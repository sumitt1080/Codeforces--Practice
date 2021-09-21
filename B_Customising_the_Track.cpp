#include <bits/stdc++.h>

using namespace std;

#define ll long long

// int gcd(int a, int b) {
//    if (a == 0 || b == 0)
//    return 0;
//    else if (a == b)
//    return a;
//    else if (a > b)
//    return gcd(a-b, b);
//    else return gcd(a, b-a);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n ; 
        cin>>n;
        ll arr[n];
        // int som = 1;
        // int x=1;
        // int y=2;
        ll sum = 0;
        for(int  i = 0 ; i<n ;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        ll ans = sum%n;
        if(ans==0){
            cout<<0<<endl;
        }
        else{
            cout<<ans*(n-ans)<<endl;
        }
    }
}