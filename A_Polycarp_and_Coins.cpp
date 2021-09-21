#include <bits/stdc++.h>
#include <cmath>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        double temp = ceil(2*n)/3;
        int temp2 = ceil(temp);
        //cout<<temp2<<endl;
        int c2 = (temp2/2);
        int c1 = (n-(c2*2));
        cout<<c1<<" "<<c2<<endl;
    }
}