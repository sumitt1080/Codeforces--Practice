#include<bits/stdc++.h>
using namespace std;

#define ll long long

int findKey(int input1, int input2, int input3){
    int min = 99999;
    while(input3){
        int k = input3%10;
        if(k<min)
            min = k;
        input3 = input3/10;

    }
    int h = (input2/100)%10;
    int t = input1/1000;
    int key = (t*h)+min;
    return key;
}

int main()
{
    cout<<findKey(3521, 2452, 1352);
    return 0;
}