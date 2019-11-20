#include<iostream>
#include<queue>
#include<cstring>
#include<climits>
#define max 101
using namespace std;
int n;
bool bfs(int rg[max][max],int s,int t,int par[])
{
    bool visit[max];
    memset(visit,0,sizeof(visit));
    queue<int> q;
    q.push(s);
    visit[s] = true;
    par[s] = -1;
    while(!q.empty())
    {
        int a = q.front();
        q.pop();
        for(int b=0; b<n;b++)
        {
            if(visit[b]==false && rg[a][b]>0)
            {
                q.push(b);
                par[b] = a;
                visit[b]=true;
            }
        }
    }
    return (visit[t]==true);
}
int fordfulkerson(int g[max][max],int n,int s,int t)
{
    int u,v;
    int rg[max][max];
    for(u=0;u<n;u++)
    {
        for(v=0;v<n;v++)
        {
            rg[u][v]=g[u][v];
        }
    }
    int par[max];
    int maxflow=0;
    while(bfs(rg,s,t,par))
    {
        int pathflow = INT_MAX;
        for(v=t; v!=s; v=par[v])
        {
            u = par[v];
            pathflow = min(pathflow,rg[u][v]);
        }
        for(v=t; v!=s; v=par[v])
        {
            u = par[v];
            rg[u][v] -= pathflow;
            rg[v][u] +=pathflow;
        }
        maxflow += pathflow;
    }
    return maxflow;
}
int main()
{
    int i,u,v,w,p=1;
    int s,t,c;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }

    int g[max][max];
    memset(g,0,sizeof(g));
    cin>>s>>t>>c;
    s--,t--;
    for(i=0;i<c;i++)
    {
        cin>>u>>v>>w;
        g[u-1][v-1] += w;
        g[v-1][u-1] += w;
    }
    cout<<"Network "<<p<<endl<<"The bandwidth is "<<fordfulkerson(g,n,s,t)<<"."<<endl;
    cout<<endl;
    p++;
    }
    return 0;
}



