#include<bits/stdc++.h>

using namespace std;
 #define ll long long

 int main(){
     int t; 
     cin>>t;
      while(t--){
          int n,k;
          cin>>n>>k;

          int maxpeak = (n-1)/2;
          if(k>maxpeak){
              cout<<"-1"<<endl;
              continue;
          }


          int s=1, e=n;
          int lim = k*2+1;
          for(int  i = 1; i< n && lim; i++, lim--){
              if(i%2==0){
                  cout<<e<<" ";
                  e--;
              } else{
                  cout<<s<<" ";
                  s++;
              }
          }

          for(int  i = s; i<= e; i++){
              cout<<i<<" ";
          }
          cout<<endl;
      }
 }
