#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int f=0;

        for(int i=0; i< n ;i++){
            int x;
            cin>>x;
            if(x<0)
                f=1;
        }
        if(f==1){
            cout<<"NO"<<endl;
        }
        else{
             cout<<"YES"<<endl;;
            cout<<101<<endl;
 
 
            for (int i = 0; i <= 100; i++)
            {
                cout<<i<<endl;
            }
            cout<<endl;
        }
    }
}