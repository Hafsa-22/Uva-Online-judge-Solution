#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
      return a;
    return gcd(b,a%b);
}
int main()
{
    int n,i,ans,j;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;

        ans =0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                ans+=gcd(i,j);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
