#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 0x3f3f3f3f;
int main()
{
   int n;
    
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int minn=INF;
    int loc;
    for(int i=1;i<n;i++)
    {
        if(abs(a[i]-a[i+1])<minn)
        {
            minn=abs(a[i]-a[i+1]);
            loc=i;
            
        }
    }
    if(abs(a[n]-a[1])<minn)
    {
        cout<<n<<" 1"<<endl;
    }
    else
        cout<<loc<<" "<<loc+1<<endl;

    return 0;
}