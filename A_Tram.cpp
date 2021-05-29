#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int max= 0;
    int a,b,c=0;
    for(int i = 0;i<n ;i++){
        cin>>a>>b;
        c-=a;
        c+=b;
        if(c>max){
            max =c;

        }
    }
    cout<<max<<endl;
}