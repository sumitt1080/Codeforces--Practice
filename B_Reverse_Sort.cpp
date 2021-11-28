#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n; 
        cin>>n;
        string s;
        cin>>s;
        string temp = s;
        sort(temp.begin(), temp.end());
        if(s == temp){
            cout<<'0'<<endl;
            continue;
        }
        vector<ll> ans;
        for(int i = 0 ; i< n; i++){
            if(s[i]!=temp[i])
                ans.push_back(i+1);
        }
        cout<<'1'<<endl;
        cout<<ans.size()<<" ";
        for(auto x: ans)
            cout<<x<<" ";
        cout<<endl;
            
    }
}