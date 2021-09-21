#include<bits/stdc++.h>
using namespace std;

#define ll long long


const char nl = '\n';

int main(){
    
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        int rofa=2;
        int zola=1;
        vector<int> p(n);
        for(auto &thing:p) 
        cin>>thing;
        if(p[0]){
            cout<<n+1<<" ";
            for(int i=1;i<=n;i++) cout<<i<<" ";
            cout<<nl;
        }
        else if(!p[n-1]){
            for(int i=1;i<=n+1;i++) cout<<i<<" ";
            cout<<nl;
        }
        else{
            int counter=-1;
            for(int i=0;i<n-1;i++){
                if(p[i]==0 &&p[i+1]){
                    counter=i+1;
                    break;
                }
            }
            if(counter==-1) cout<<-1<<nl;
            else{
                for(int i=1;i<=counter;i++)
                    cout<<i<<" ";
                cout<<n+1<<" ";
                for(int i=counter+1;i<=n;i++) cout<<i<<" ";
                cout<<nl;
            }
        }
        
    }
    
    return 0;
}