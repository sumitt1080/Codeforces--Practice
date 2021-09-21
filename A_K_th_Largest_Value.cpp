#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
   ll n , q; 
      cin >> n >> q;

      ll zero = 0 , one = 0 ;

      vector<int> v(n+1) ;
      for(int i = 1 ; i <= n ; i++){
        cin >> v[i] ;

        if(v[i] == 0) zero ++ ;
        else if(v[i] == 1) one ++ ;
        //else assert(false) ;
      }

      while(q--){
        ll t , x ;
        cin >> t >> x ;
        if(t == 1){
          v[x] ^= 1;
          if(v[x] == 1) one ++ , zero -- ;
          else zero ++ , one --;
        }
        else if(t == 2){
          if(one >= x){
            cout << 1 << endl ;
          }
          else{
            cout << 0 << endl ;
          }
        }
       
      }
}