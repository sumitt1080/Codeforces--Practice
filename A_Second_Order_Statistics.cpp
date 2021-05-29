#include <bits/stdc++.h>
using namespace std; 
 
void print2Smallest(int arr[], int arr_size)
{
    int i, first, second;
 
    if (arr_size < 2)
    {
        cout<<"NO"<<endl;
        return;
    }
 
    first = second = INT_MAX;
    for (i = 0; i < arr_size ; i ++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
 
        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MAX)
        cout << "NO"<<endl;
    else
        cout <<second<< endl;
}

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i = 0;i<n;i++){
       cin>>a[i];
   }
    print2Smallest(a, n);
    return 0;
}