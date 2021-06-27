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
        for(int i = 0; i<n ; i++){
            cin>>a[i];
        }
        int max = INT_MIN, min = INT_MAX, minIndex=0, maxIndex=0;
        for(int  i = 0; i<n ;i++){
            if(a[i]<min){
                min = a[i];
                minIndex = i;
            }
        }
        for(int  i = 0; i<n ;i++){
            if(a[i]>max){
                max = a[i];
                maxIndex = i;
            }
        }

        // int maxstep = (leftdist(maxIndex)>rightdist(n, maxIndex))?leftdist(maxIndex):rightdist(n, maxIndex);
        // int minstep = (leftdist(minIndex)>rightdist(n, minIndex))?leftdist(minIndex):rightdist(n, minIndex);
        minIndex = (leftdist(minIndex)<rightdist(n, minIndex))?leftdist(minIndex):rightdist(n, minIndex);
        maxIndex = (leftdist(maxIndex)<rightdist(n, maxIndex))?leftdist(maxIndex):rightdist(n, maxIndex);
        cout<<minIndex+maxIndex+1<<endl;


    }
}