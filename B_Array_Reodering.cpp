#include<bits/stdc++.h>
#include<vector>
#include <algorithm>

#define ll long long

using namespace std;

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         int a[n];
        
        vector<int> odd;
        vector<int> even;
 
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
 
            if(x%2==0)
            {
                even.push_back(x);
            }
            else
            {
                odd.push_back(x);
            }
        }
 
        int o = odd.size();
        int e = n - o;
 
        long long int ans = e * o;//even*odd
 
        for (int i = 0; i < o; i++)
        {
            for (int j = i+1; j < o; j++)
            {
                if((gcd(odd[i], 2*odd[j]))>1)
                    ans++;
            }
            
        }//odd
 
        ans += (e * (e - 1) / 2);;//even
 
        cout<<ans<<"\n";
    }
}