#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string str;
    cin>>str;
    string result = "";
    for(int i = 0; i<str.length(); i++){
        if(str[i] == 'U'){
            result = result+'D';
        }
        else if(str[i] == 'D'){
            result = result+'U';
        }
        else if(str[i] == 'L'){
            result = result + 'L';
        }
        else{
            result = result + 'R';
        }
    }
    cout<<result<<endl;
}
    return 0;
}