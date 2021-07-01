#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool areBalanced(string expr)
{
    stack<char> s;
    char x;

    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' )
        {
            
            s.push(expr[i]);
            continue;
        }
 
        if (s.empty())
            return false;
 
        switch (expr[i])
        {
        case ')':
 
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;
        }
    }
 
    return (s.empty());
}



int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l= s.length();
        if(s[0]==s[l-1])
        {
            cout<<"NO\n";
            continue;
        }

        char x;
        char f=s[0];
        char la=s[l-1];
        if ((s[0] == 'B' || s[l - 1] == 'B') && (s[0] == 'A' || s[l - 1] == 'A'))
        {
            x='C';
        }
        else if ((s[0] == 'A' || s[l - 1] == 'A') && (s[0] == 'C' || s[l - 1] == 'C'))
        {
            x = 'B';
        }
        else
        {
            x='A';
        }

        string s2=s;
        for (int i = 0; i < l; i++)
        {
            if(s[i]==f)
            {
                s[i]='(';
                s2[i]='(';
            }
            if (s[i] == la)
            {
                s[i] = ')';
                s2[i] = ')';
            }
            if (s[i] == x)
            {
                s[i] = '(';
                s2[i] = ')';
            }
        }

         if(areBalanced(s))
        {
            cout<<"YES\n";
            continue;
        }
        if (areBalanced(s2))
        {
            cout << "YES\n";
            continue;
        }
        cout<<"NO\n";
    }
}