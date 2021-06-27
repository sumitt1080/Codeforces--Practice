#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        vector<string> v(n);
        vector<pair<int, int>> star, new_star;
        for(auto &x: v){
            cin>>x;
        }


        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n; j++){
                if(v[i][j] == '*'){
                    star.push_back(make_pair(i,j)) ;
                }
            }
        }

        if(star[0].first == star[1].first){
          int diff = abs(star[0].second - star[1].second);
          if(star[0].first + diff >= n){
            new_star.push_back(make_pair(star[0].first - diff,star[0].second)) ;
            new_star.push_back(make_pair(star[1].first - diff,star[1].second)) ;
          }
          else{
            new_star.push_back(make_pair(star[0].first + diff,star[0].second)) ;
            new_star.push_back(make_pair(star[1].first + diff,star[1].second)) ;
          }
        }
        else if(star[0].second == star[1].second){
          int diff = abs(star[0].first - star[1].first);
          if(star[0].second + diff >= n){
            new_star.push_back(make_pair(star[0].first ,star[0].second - diff)) ;
            new_star.push_back(make_pair(star[1].first ,star[1].second - diff)) ;
          }
          else{
            new_star.push_back(make_pair(star[0].first ,star[0].second + diff)) ;
            new_star.push_back(make_pair(star[1].first ,star[1].second + diff)) ;
          }
        }
        else{
            new_star.push_back(make_pair(star[0].first,star[1].second));
            new_star.push_back(make_pair(star[1].first,star[0].second)) ;
        }

        for(auto x : new_star){
            v[x.first][x.second] = '*' ;
        }


        for(auto x : v){
            cout << x << endl ;
        }
    }
}