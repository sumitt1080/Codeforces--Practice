#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll reverseNo(ll n){
    ll reversedNo=0, rem; 
    while(n!=0)    
  {    
     rem=n%10;      
     reversedNo=reversedNo*10+rem;    
     n/=10;    
  }   
  return reversedNo;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int count = 0;
        if((n%10)%2==0)
            count = 0;
        else if((reverseNo(n)%10)%2 == 0)
            count = 1;
        else {
            while(n!=0){
                int k = n%10;
                n=n/10;
                if(k%2==0){
                    count = 2;
                    break;
                }
                else
                    continue;
            }
            if(n==0)
                    count = -1;
        }
           cout<<count<<endl; 
    }
}