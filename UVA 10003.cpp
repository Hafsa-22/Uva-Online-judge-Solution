#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e,w,q,test,i,j,k,u,v,a,b;
    int graph[200][200];
    test=1;
    bool flag = true;
    while(1)
    {
        cin>>n>>e>>q;
        if(n==0)
            break;
        if(!flag)
        {
            cout<<endl;
        }
        flag = false;
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                graph[i][j]=INT_MAX;

        while(e--)
        {
            cin>>u>>v>>w;
            graph[u][v]=w;
            graph[v][u]=w;
        }
        for(k=1; k<=n; k++)
            for(i=1; i<=n; i++)
                for(j=1; j<=n; j++)
                    graph[i][j]=min(graph[i][j],max(graph[i][k],graph[k][j]));
        cout<<"Case #"<<test<<endl;
        while(q--)
        {
            cin>>a>>b;
            if(graph[a][b]!=INT_MAX)
                cout<<graph[a][b]<<endl;
            else
                cout<<"no path"<<endl;
        }
        test++;
    }
    return 0;
}
