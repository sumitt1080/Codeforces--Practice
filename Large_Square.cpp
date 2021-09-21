#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool isPerfect(int N)
    {
        if ((sqrt(N) - floor(sqrt(N))) != 0)
            return false;
        return true;
    }

int main()
{
int t;
cin>>t;
while(t--){
    ll n, a, belowN = -1, n1;
    cin>>n>>a;
    if (isPerfect(n)) {
            n1 = n;
            n1 = sqrt(n1);
            cout<<n1*a<<endl;
        }
    else{
    n1 = n-1;
    while (true) {
            if (isPerfect(n1)) {
                belowN = n1;
                break;
            }
            else
                n1--;
        }
        n1 = sqrt(n1);
        cout<<n1*a<<endl;
    }
        
}
    return 0;
}