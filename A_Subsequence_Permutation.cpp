#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string s1 = s;
    //strcpy(s, s1);
    int count = 0;
    sort(s1.begin(), s1.end());
    for(int i = 0; i< s1.length(); i++){
        if(s[i] != s1[i])
            count++;
        continue;
    }
    cout<<count<<endl;
}
    return 0;
}