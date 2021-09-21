#include <bits/stdc++.h>

using namespace std;

#define ll long long

// void psuedoBinary(int n)
// {
//     while (n > 0)
//     {
        
//         int temp = n, m = 0, p = 1;
//         int count = 0;
//         while (temp)
//         {
//             int rem = temp % 10;
//             temp = temp / 10;

//             if (rem != 0)
//                 m += p;

//             p *= 10;
//             count++;
//         }

//         //cout << m << " "<<endl;
//         cout<<count<<endl;

        
//         n = n - m;
//     }
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a;
        int maxi = 0;
        cin >> a;
        while (a > 0)
        {
            if ((a % 10) > maxi)
                maxi = a % 10;
 
            a = a / 10;
        }
 
        cout << maxi << endl;
    }
}