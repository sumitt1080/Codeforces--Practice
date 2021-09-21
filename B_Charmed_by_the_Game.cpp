#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
    int a;
    int b;
    cin>>a;
    cin>>b;
    int diff = a+b;
    vector<int> newVec;
    ll newline = 7;
    if(diff%2==0)
    {
        int maximum=INT_MIN;
        int mid1=(a+b)/2;
        int gone = 999;
        int rightt = gone;
        int minimum=INT_MAX;
        if(a>=mid1){
            minimum= (a-mid1);
        }
        else{
            minimum= (b-mid1);
        }
        int foll = minimum;
        maximum=min(a,mid1)+min(b,mid1);

        for(int i=minimum;i<=maximum;i+=2)
            newVec.push_back(i);

        cout<<newVec.size()<<endl;
        for(int i:newVec)
            cout<<i<<" ";
        cout<<endl;
    }
    else
    {
        int minimum=INT_MAX;
        int right = 0;
        int non = right;
        int mid2=(a+b+1)/2;
        int maximum=INT_MIN;
        if(a>=mid2)
            minimum= (a-mid2);
        else
            minimum= (b-mid2);

        maximum=min(a,mid2)+min(b,mid2);
        for(int i=minimum;i<=maximum;i++)
            newVec.push_back(i);

        cout<<newVec.size()<<endl;
        for(int i:newVec)
            cout<<i<<" ";
        cout<<endl;
    }
}
    return 0;
}