#include<iostream>
#include<map>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int n,m,i,j,k,u,v,w,t=1;
    int c,ans,mini;
    string s;
    int g[30][30];
    while(1)
    {
        map<int,string>map;
        cin>>n>>m;
        if(n==0)
            break;
        for(i=1;i<=n;i++)
        {
            cin>>s;
            map[i]=s;
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==j)
                    g[i][j]=0;
                else
                    g[i][j] = INT_MAX;
            }
        }
        while(m--)
        {
            cin>>u>>v>>w;
            g[u][v]= g[v][u] = w;
        }
        for(k=1; k<=n; k++)
            for(i=1; i<=n; i++)
                for(j=1; j<=n; j++)
                    g[i][j]=min(g[i][j],g[i][k]+g[k][j]);

        mini = INT_MAX;
        for(i=1;i<=n;i++)
        {
            c = 0;
            for(j=1;j<=n;j++)
            {
                c+=g[i][j];
            }
            if(mini > c)
            {
                mini = c;
                ans =i;
            }
        }
        cout<<"Case #"<<t<<" : "<<map[ans]<<endl;
        t++;
    }
    return 0;
}

