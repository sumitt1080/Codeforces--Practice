#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    char a[4][4];
    int n =3;
    for(int i=1; i<=3;i++){
        for(int j =1; j<=3;j++){
            cin>>a[i][j];
        }
    }
    
    int flag =0;
    for(int i=1; i<=3;i++){
        for(int j =1; j<=3;j++){
            if(a[i][j]=='X'){
                if(a[n-i+1][n-j+1] == 'X'){
                    continue;
                }
                else{
                    flag =1;
                    break;
                }
            }
        }
    }
    if(flag!=1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}