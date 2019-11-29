#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int i,j,k,n,t=1;
    while(1)
    {
        int u[210],v[210];
        double g[210][210];
        cin>>n;
        if(n==0)
            break;
        for(i=0;i<n;i++)
            cin>>u[i]>>v[i];

        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
                 g[i][j] = g[j][i] = sqrt(((u[i]-u[j])*(u[i]-u[j]))+((v[i]-v[j])*(v[i]-v[j])));

        for(k=0;k<n;k++)
            for(i=0;i<n;i++)
               for(j=0;j<n;j++)
                  g[i][j] = min(g[i][j],max(g[i][k],g[k][j]));

        cout<<"Scenario #"<<t<<endl;
        cout<<"Frog Distance = "<<setprecision(3)<<fixed<<g[0][1]<<endl<<endl;
        t++;
    }
    return 0;
}
