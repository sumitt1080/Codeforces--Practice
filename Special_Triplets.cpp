#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
    int n, co=0;
    cin>>n;
    for(int C=1;C<=n;C++){
        for(int B=C;B<=n;B+=C){
            if(B%C == 0){
                for(int A = C; A<=n; A+=B){
                    if(A%B == C){
                        co++;
                    }
                }
            }
        }
    }
    cout<<co<<endl;
}
    return 0;
}