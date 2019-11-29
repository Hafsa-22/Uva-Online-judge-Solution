#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int n,r,i,j,k,w,t=1,c;
    string s,d;
    while(1)
    {
        cin>>n>>r;
        if(n==0)
            break;
        map<string,int>map;
        c=1;
        int g[210][210];
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                 g[i][j]= -1;
                 if(i==j)
                    g[i][j] =0;
            }
        }
        for(i=1;i<=r;i++)
        {
            cin>>s>>d>>w;
            if(map[s]==0)
                map[s] = c++;
            if(map[d]==0)
                map[d] = c++;
            g[map[s]][map[d]] = g[map[d]][map[s]] = w;
        }
        for(k=1;k<=n;k++)
            for(i=1;i<=n;i++)
               for(j=1;j<=n;j++)
                 g[i][j] = max(g[i][j],min(g[i][k],g[k][j]));
        cin>>s>>d;
        cout<<"Scenario #"<<t<<endl;
        t++;
        cout<<g[map[s]][map[d]]<<" tons"<<endl<<endl;
    }
    return 0;
}
