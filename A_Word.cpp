#include<bits/stdc++.h>

using namespace std;

int main(){
     int i;
    int upper=0,lower=0;
    string str;
    cin>>str;
    for(i=0; str[i]!=0; i++){
        if(str[i]>='A' && str[i]<='Z'){
            upper++;
    }
        else if(str[i]>='a' && str[i]<='z'){
            lower++;
    }
    }
    
    if(lower>=upper)
        transform(str.begin(), str.end(), str.begin(), ::tolower);
     else
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str;
}