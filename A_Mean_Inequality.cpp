#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n =n*2;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr , arr + n );
       int end = n-1;
       int start = 0;
       while(start<end){
           cout<<arr[start++]<<" ";
           if(start>end)
                break;

            cout<<arr[end--]<<" ";
            if(start>end)
                break;
       }
        cout<<endl;
    }
}