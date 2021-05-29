#include<bits/stdc++.h>
#include <cstring>

using namespace std;

int main(){

    string str, result;
    cin>>str;
    
    for(int i = 0; i<str.size(); i++){
        if(str[i] == '.'){
            result += '0';
        }
        else if(str[i] == '-'){
            if(str[i+1] == '.')
                result += '1';
            else if(str[i+1] == '-')
                result += '2';
            i++;
        }
    }
    cout<<result<<endl;
}