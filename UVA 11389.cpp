#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,d,r,i;
    while(1)
    {
        int sum=0;
        cin>>n>>d>>r;
        if(n==0 && d==0 && r==0)
        {
            break;
        }
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(b,b+n,greater<int>());
        for(i=0;i<n;i++)
        {
            if(a[i]+b[i] > d)
            {
                sum += (a[i]+b[i]-d)*r;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
