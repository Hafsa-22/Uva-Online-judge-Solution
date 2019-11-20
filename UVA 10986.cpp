#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
typedef pair<int,int>pp;
int const MAX=50001;
vector<pp>adj[MAX];
int dis[MAX],dis2[MAX];
bool dijkstra(int s,int t){
    memset(dis,10010,sizeof(dis));
    int i,u,v,w;
    priority_queue<pp,vector<pp>,greater<pp> >pq;
    pq.push(pp(0,s));
    dis[s]=0;
    while(!pq.empty()){
        u=pq.top().second;
        pq.pop();
        if(u==t)
        {
            while(!pq.empty())pq.pop();
            return true;
        }
        for(i=0;i<adj[u].size();i++){
            v=adj[u][i].first;
            w=adj[u][i].second;
            if(dis[u]+w<dis[v]){
                    dis[v]=dis[u]+w;
                pq.push(pp(dis[v],v));
            }
        }
    }
   while(!pq.empty())
   {
       pq.pop();
   }
   return false;
}
int main(){
    int n,e,u,v,w,t,s,q;

    cin>>q;
    for(int k=1;k<=q;k++)
    {
            cin>>n>>e>>s>>t;
        for(int i=1;i<=e;i++){
            cin>>u>>v>>w;
            adj[u].push_back(pp(v,w));
            adj[v].push_back(pp(u,w));
        }
        cout<<"Case #"<<k<<": ";
        if(e!=0 && dijkstra(s,t)){
            cout<<dis[t];
        }
        else{
            cout<<"unreachable";
        }
        cout<<endl;
        memset(adj,0,sizeof(adj));

    }
return 0;
}

/*
3
2 1 0 1
0 1 100
3 3 2 0
0 1 100
0 2 200
1 2 50
2 0 0 1


*/
