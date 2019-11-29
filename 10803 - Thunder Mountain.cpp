#include<bits/stdc++.h>
#define INT 1000000
using namespace std;
int u[105],v[105];
double g[105][105];
int main()
{
    int i,j,k,t,p,n;
    cin>>t;
    for(p=1;p<=t;p++)
    {
        cin>>n;

        for(i=1;i<=n;i++)
            cin>>u[i]>>v[i];

        for(i=1;i<=n;i++)
        {
            for(j=i;j<=n;j++)
            {
                g[i][j] = sqrt((u[i]-u[j])*(u[i]-u[j]) + (v[i]-v[j])*(v[i]-v[j]));
                if(g[i][j] > 10)
                    g[i][j] = INT;
                g[j][i] = g[i][j];
            }
        }

        for (k=1; k<=n; k++)
            for (i=1; i<=n; i++)
                for (j=1; j<=n; j++)
                    g[i][j] = min(g[i][j], g[i][k] + g[k][j]);

        double ans = 0.0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                ans = max(ans,g[i][j]);
            }
        }
        cout<<"Case #"<<p<<":"<<endl;
        if(ans == INT)
        {
            cout<<"Send Kurdy"<<endl;
        }
        else
        {
            printf("%.4lf\n", ans);
        }
        cout<<endl;
    }
    return 0;
}
