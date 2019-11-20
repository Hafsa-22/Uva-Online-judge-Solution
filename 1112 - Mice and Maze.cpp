#include<bits/stdc++.h> 
#include<stdio.h>
using namespace std;
int adj[105][105];
int main()
{
    int test,n,e,t,m,u,v,w;
    cin>>test;
    while(test--)
    {
        scanf("%d\n%d\n%d\n%d\n", &n, &e, &t, &m);
        memset(adj,63,sizeof(adj));
        n++;
        for(int i=0;i<m;i++)
        {
            cin>>u>>v>>w;
            adj[u][v]=w;
        }
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    adj[i][j] = min(adj[i][j],adj[i][k]+adj[k][j]);
                }
            }
        }
        int ans =0;
        for(int i=0;i<n;i++)
        {
            if(adj[i][e] <= t || (i==e))
            {
                ans++;
            }
        }
        printf("%d\n", ans);
        if(test)
        {
            printf("\n");
        }
    }
    return 0;
}
