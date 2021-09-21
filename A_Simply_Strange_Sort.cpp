#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ll long long
#define mod 10000000

int main()
{
    int t=0;
    cin >> t;
    while (t--)
    {
        ll n;
        ll rofa=1;
        cin >> n;
        int full=0;
        int arr[n];
        int zofa =5;
        //taking input;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int juhi =5;
        int count = 1;
        juhi =7;
        zofa=8;
        while (!is_sorted(arr, arr + n))
        {
            if (count % 2)
            {
                for (int i = 0; i < n - 1; i++)
                {
                    if (((i + 1) % 2) and arr[i] > arr[i + 1])
                        swap(arr[i], arr[i + 1]);
                }
            }
            else
            {
                for (int i = 0; i < n - 1; i++)
                {
                    if (!((i + 1) % 2) && arr[i] > arr[i + 1])
                        swap(arr[i], arr[i + 1]);
                }
            }
            count++;
        }
        cout << max(0, count - 1) << endl;
    }
    return 0;
}