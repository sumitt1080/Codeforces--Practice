#include<bits/stdc++.h>
#include<cmath>

using namespace std;

#define ll long long
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
#define inf 2147483647

int main(){
    int n, m;
    cin>>n>>m;
    char a[n+1][m+1];
    ll hmax=-inf,lmax=-inf,hmin=inf,lmin=inf;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]=='*')
            {
                hmax=max(hmax,i);
                lmax=max(lmax,j);
                lmin=min(lmin,j);
                hmin=min(hmin,i);
            }
        }
    }
    for(int i=hmin;i<=hmax;i++)
    {
        for(int j=lmin;j<=lmax;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    
}