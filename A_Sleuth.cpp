#include<bits/stdc++.h>

using namespace std;

int main(){
    string question; getline(cin, question);

    for(int k = question.size(); k >= 0; k--){
        char current = tolower(question[k]);
        if(!(current >= 'a' && current <= 'z')){continue;}
        if(current == 'a' || current == 'e' || current == 'i' || current == 'o' || current == 'u' || current == 'y')
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        break;
    }
    return 0;
}
