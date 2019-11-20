#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    while(cin>>n)
    {
    int a[n+5],b[n+5];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        b[i]=abs(a[i+1]- a[i]);
    }
    sort(b,b+n-1);
    bool joy=true;
    for(i=0;i<n-1;i++)
    {
        if(b[i] != i+1)
            joy = false;
    }

    if(joy)
    {
        cout<<"Jolly"<<endl;
    }
    else
    {
        cout<<"Not jolly"<<endl;
    }
    }
    return 0;
}
