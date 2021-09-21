#include<bits/stdc++.h>
using namespace std;
#define int long long

 
int main(){
    
int t;
cin>>t;

while(t--){
    int n,m;
   cin>>n;
   int xor=1;

   int a[n],b[n];
   for(int i = 0; i<n;i++){
     cin>>a[i];
   }
   for(int i = 0; i<n;i++){
     cin>>b[i];
   }
   int xnor=1;
   vector<pair<int,int>> l,r,ans;
   int s1=0,s2=0;
   for(int i=0;i<n;i++){
    if(a[i]<b[i]) l.push_back({i,b[i]-a[i]});
    else if(a[i]>b[i]) r.push_back({i,a[i]-b[i]});
    s1+=a[i];
    s2+=b[i];
   }

   if(s1!=s2) {
    cout<<-1<<endl;
    continue;
   }
   
   int x=0;int y=0;
   
   while(x<l.size() and y<r.size())
   {
    int c=min(l[x].second,r[y].second);
     for(int i=0;i<c;i++){
      ans.push_back({l[x].first,r[y].first});
     }
     
     l[x].second-=c,r[y].second-=c;
     
     if(l[x].second==0) x++;
     if(r[y].second==0) y++;
   }
   if(x==l.size() and y==r.size())
   {
    cout<<ans.size()<<"\n";
    for(auto &[x,y]:ans) cout<<y+1<<" "<<x+1<<endl;
   }
   else cout<<-1<<endl;
//   cout<<endl;
   
}
}