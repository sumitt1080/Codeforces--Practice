#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i< n ;i++){
            cin>>arr[i];
        }
        int min = *min_element(arr , arr+n);
        int total = 0;
        for(int i = 0; i<n ; i++){
            if(arr[i] != min){
                total++;
            }
        }
        cout<<total<<endl;
    }
}