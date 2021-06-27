#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n ; cin >> n ;
        vector<int> v(n) ;
        map<int,int> rem ;
        for(auto &x : v){
            cin >> x;
            rem[x] ++ ;
        }
        for(int i = 0 ; i < n ; i++){
            if(rem[v[i]]  == 1){
                cout << i + 1 << endl ;
                
            }
        }
    }
}