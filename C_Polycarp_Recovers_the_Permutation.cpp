#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<ll> vec;
        vector<ll> ans;
        for(int i = 0 ; i< n ; i++){
            int k;
            cin>>k;
            vec.push_back(k);
        }
        
        int maximum = *max_element(vec.begin(), vec.end());
        int size = vec.size();
        if(vec[0]!=maximum && vec[size-1]!=maximum){
            cout<<"-1"<<endl;
            continue;
        }
        else{
            int start = 0, end = size-1;
            while(start<=end){
            int z = max(vec[start], vec[end]);
            ans.push_back(z);
            remove(vec.begin(), vec.end(), z);
            if(z==vec[start]) start++;
            else end--;
            }
            for(auto x:ans)
                cout<<x<<" ";
            cout<<endl;
        }
    }
}