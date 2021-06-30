#include<bits/stdc++.h>

using namespace std;

int leftdist(int k){
    return k-0;
}

int rightdist(int n, int k){
    return n - k;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int a[n];
        int ma = INT_MIN, mi = INT_MAX;
        for(int i = 0; i<n ; i++){
            cin>>a[i];
            ma = max(ma, a[i]);
            mi = min(mi, a[i]);
        }

        int lmi, lma;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==ma)
                lma=i+1;
 
            if(a[i]==mi)
                lmi=   i+1; 
        }

        int rma = n - lma + 1;
        int rmi = n - lmi + 1;

        int o1 = max(lma, lmi);             // delete both from left
        int o2 = max(rma, rmi);             // delete both from right
        int o3 = min(lmi+rma , rmi+lma);    // first delete min from left + max from right, then delete min from right + max from left
        
        int step = min(o1, min(o2,o3));
        cout<<step<<endl; 
       
    }
}