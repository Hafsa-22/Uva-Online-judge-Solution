#include<iostream>
using namespace std;
int main()
{
    int n,i,j=0;
    while(cin>>n)
    {
       int a[n],c=0,b=0;
       if(n==0)
       break;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]==0)
           {
               b++;
           }
           if(a[i]> 0 && a[i]<=99)
           {
               c++;
           }
       }
       cout<<"Case "<<++j<<": "<<c-b<<endl;
    }
    return 0;
}
