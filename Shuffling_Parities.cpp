#include<bits/stdc++.h>
using namespace std;

#define ll long long

void arrange(ll a[], ll n){
    int oddInd = 0;
    int evenInd = 1;
    while(true){
        while(evenInd < n && a[evenInd]%2==1)
            evenInd+=2;
        while(oddInd < n && a[oddInd]%2 == 0)
            oddInd+=2;
        if(evenInd < n && oddInd < n)
            swap(a[evenInd], a[oddInd]);
        else
            break;
    }
}

int main()
{
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i= 0 ; i<n;i++){
        cin>>a[i];
    }
    arrange(a, n);
    int sum = 0;
    for(int i = 0; i<n ; i++){
        sum+=(a[i]+(i+1))%2;
    }
    cout<<sum<<endl;
}
    return 0;
}