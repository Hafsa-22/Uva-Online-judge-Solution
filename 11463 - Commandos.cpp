#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
int main()
{
    int t,i,j,k,n,r,c,p,u,v;
    cin>>t;
    for(p=1; p<=t; p++)
    {
        cin>>n>>r;
        int dis[100][100];
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i==j)
                {
                    dis[i][j]=0;
                }
                else
                {
                    dis[i][j]=MAX;
                }
            }
        }
        while(r--)
        {
            cin>>u>>v;
            dis[u][v] =1;
            dis[v][u] =1;
        }
        for (int k = 0; k < n; k++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    dis[i][j] = min(dis[i][j], dis[i][k]+dis[k][j]);
                }
            }
        }
        int s,d,ans=0;
        cin>>s>>d;
        for(i=0;i<n;i++)
        {
            if(dis[s][i] != MAX && dis[i][d] != MAX)
            {
                ans = max(ans,dis[s][i]+dis[i][d]);
            }
        }
      cout<<"Case "<<p<<": "<<ans<<endl;
    }
    return 0;
}
