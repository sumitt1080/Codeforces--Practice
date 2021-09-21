#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
   int a, b,c,d,e;
   cin>>a>>b>>c>>d>>e;
   if(((a+b)<=d && (c<=e)) || ((c+b)<=d && (a<=e)) || ((a+c)<=d && (b<=e))){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }
}
    return 0;
}