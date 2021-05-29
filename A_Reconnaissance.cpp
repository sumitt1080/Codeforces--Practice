#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long

int main(){
    int n,d;
    cin>>n>>d;
    int a[n];
    vector<int> vec;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int count =0;
    for(int i = 0; i<n;i++){
        for(int j=0; j<n;j++){
            int x = a[i]-a[j];
            if(abs(x)<=d)
                count++;
        }
    }
    cout<<count-n<<endl;
    

}