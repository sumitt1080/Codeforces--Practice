#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t; 
    cin>>t;
    while(t--){
         ll n, k1, k2, w, b;
        cin >> n >> k1 >> k2 >> w >> b;
        ll j = 0, k3 = n - k1, k4 = n - k2;
        if (w <= (k1 + k2) / 2 && b <= (k3 + k4) / 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}