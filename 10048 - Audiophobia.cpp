#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,c,q,Case=1;
    bool flag = true;
    while(1)
    {
        cin>>c>>s>>q;
        if(c==0 && s==0 && q==0)
        {
            break;
        }
        if(!flag)
        {
            cout<<endl;
        }
        flag = false;
       int  g[101][101];
       for(int i=1;i<=c;i++)
       {
           for(int j=1;j<=c;j++)
           {
               g[i][j] = INT_MAX;
           }
       }
       while(s--)
       {
           int a,b,d;
           cin>>a>>b>>d;
           g[a][b]=g[b][a] = d;
       }
       for(int k=1;k<=c;k++)
       {
           for(int i=1;i<=c;i++)
           {
               for(int j=1;j<=c;j++)
               {
                   g[i][j] = min(g[i][j], max(g[i][k],g[k][j]));
               }
           }
       }
       cout<<"Case #"<<Case++<<endl;
       while(q--)
       {
           int a,b;
           cin>>a>>b;
           if(g[a][b] != INT_MAX)
           {
               cout<<g[a][b]<<endl;
           }
           else
           {
               cout<<"no path"<<endl;
           }
       }
    }
    return 0;
}
