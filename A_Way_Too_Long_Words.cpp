#include<bits/stdc++.h>
#include <sstream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str, result="";
        cin>>str;
        int flag = 0 ;
        if(str.length() <= 10){
            result = str;
        }
        else{
            result = result + str[0];
            flag = 1;
        }

        if(flag == 1){
            int count = 0;
            for(int i=1; i<str.length()-1; i++){
                count++;
            }
            string st;
            stringstream ss;
            ss << count;
            ss >> st;
            result = result + st;
            result = result + str[str.length() - 1];
        }
        
        cout<<result<<endl;

    }
}