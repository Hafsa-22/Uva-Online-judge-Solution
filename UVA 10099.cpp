#include<bits/stdc++.h>
using namespace std;
int graph[110][110];



void  warshar(int node)
{
    int k,i,j;
    for(k=1;k<=node;k++)
    {
        for(i=1;i<=node;i++)
        {
            for(j=1;j<=node;j++)
            {
                graph[i][j]=max(graph[i][j], min(graph[i][k],graph[k][j]));
            }
        }
    }
}

int main()
{
    int i,j,e,n,u,v,w,s,t,d,k=1;
    while(1)
    {
        cin>>n>>e;
      if(n==0 && e==0)
      {
          break;
      }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==j)
            {
                graph[i][j]=0;
            }
            else
            {
                graph[i][j]=INT_MIN;
            }
        }
    }
     while(e--)
    {
        cin>>u>>v>>w;
        graph[u][v]=w;
        graph[v][u]=w;
    }
     warshar(n);
     cin>>s>>t>>d;
     int ans = ceil((double)d / (graph[s][t]-1));
     cout<<"Scenario #"<<k<<endl;
     k++;
     cout<<"Minimum Number of Trips = "<<ans<<endl;
    cout<<endl;
    }
     return 0;
}
