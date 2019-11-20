#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        char a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int sc=0;
        for(j=0;j<n;j++)
        {
            if(a[j]=='.')
            {
                a[j]=a[j+1]=a[j+2]='#';
                sc++;
            }
        }
        cout<<"Case "<<i<<": "<<sc<<endl;
    }
    return 0;
}
