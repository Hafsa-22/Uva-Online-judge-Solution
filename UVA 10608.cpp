#include<bits/stdc++.h>
using namespace std;
vector<int>adj[50001];
bool visited[50001];
int c;
int DFS(int u)
{
   int i,v;
   visited[u]=true;
   for(i=0;i<adj[u].size();i++)
   {
       v = adj[u][i];
       if(visited[v]==false)
       {
           DFS(v);
           c++;
       }
   }
   visited[u]=true;
   return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int  n,m,x,y;
        cin>>n>>m;
        memset(visited,false,sizeof(visited));
        memset(adj,false,sizeof(adj));
        while(m--)
        {
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int u,v,j;
        int max=0;
        for(u=1;u<=n;u++)
        {
            c=0;
            if(visited[u]==false)
            {
                int sum = DFS(u);
                if(sum>max)
                {
                    max = sum;
                }
            }
        }
        cout<<max+1<<endl;
    }
    return 0;
}
