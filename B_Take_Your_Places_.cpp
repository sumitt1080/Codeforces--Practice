#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t,n;
ll a[100005];
int main(){
 
 cin>>t;
 while(t--){
  ll ans=0,e=0,o=0;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
   ll x;
   cin>>x;
   a[i]=x%2;
  }
  for (int i = 0; i < n; i++)
  {
   if((a[i]==a[i+1]&&i+1<n)||(a[i]==a[i-1]&&i-1>=0)){
    ans++;
   }
   if((a[i]!=a[i+1]&&i+1<n)||(a[i]!=a[i-1]&&i-1>=0)) ans--;
   if(a[i]==0) e++;
   else if(a[i]==1) o++;
  }
  if(n==1) cout<<"0"<<endl;
  else if(e==n||o==n) cout<<"-1"<<endl;
  else cout<<ans<<endl;;
 }
 
}