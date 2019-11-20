#include<bits/stdc++.h>
using namespace std;
int main()
{
    int u,v,node,edge;
    while(cin>>node>>edge, node!=0 || edge != 0)
    {

        int indegree[node+1];
        vector<int>adj[node+1];
        memset(indegree,0,sizeof(indegree));
        while(edge--)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            ++indegree[v];
        }
        queue<int>q;
        vector<int>order;

        for(int i=1; i<=node; i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            u = q.front();
            q.pop();
            order.push_back(u);
            for(int i=0; i<adj[u].size(); i++)
            {
                v = adj[u][i];
                --indegree[v];
                if(indegree[v]==0)
                {
                    q.push(v);
                }
            }
        }
        for(int i=0; i<node; i++)
        {
            if(i)
            {
                cout << ' ';
            }
            cout<<order[i];
        }
        cout<<endl;
    }
    return 0;
}
