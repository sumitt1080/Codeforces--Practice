#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
    int a, b,c,d;
    cin>>a>>b>>c>>d;
    unordered_map<int, int> mp;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    mp[d]++;
    if(mp.size() == 4)
        cout<<"2"<<endl;
    else if(mp.size() == 1)
        cout<<"0"<<endl;
    else{
        if(mp[a]==3 || mp[b] == 3)
            cout<<"1"<<endl;
        else
            cout<<"2"<<endl;
    }
    
}
    return 0;
}