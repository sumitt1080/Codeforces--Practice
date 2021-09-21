#include <bits/stdc++.h>
#include <cmath>

using namespace std;

#define ll long long

int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        int count = 0;
        if(hcf(x,y)>1){
            count=0;
        }
       else if(hcf(x+1, y)>1){
           count=1;
       }
       else if(hcf(x, y+1)>1){
           count=1;
       }
       
        else{
            count = 2;
        }
        cout<<count<<endl;
    }
}