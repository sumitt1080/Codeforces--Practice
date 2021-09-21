#include <bits/stdc++.h>

using namespace std;

#define ll long long

int reverse(int n){
    n = !n;
    return n;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i = 0; i<n;i++){
            for(int j=0;j<m;j++){
                a[i][j]=0;
            }
        }
       
        for (int i = 0; i < n; i+=2)
        {
            a[i][0]=1;
            a[i][m-1] = 1;
        }
 
        for (int i = 2; i <= m-3; i+=2)
        {
            a[0][i] = 1;
            a[n-1][i] = 1;
        }
       for(int i = 0; i<n;i++){
            for(int j=0;j<m;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}