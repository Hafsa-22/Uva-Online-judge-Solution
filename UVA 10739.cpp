#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,t,i,j;
    string x,y;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        cin>>x;
        y = x;
        reverse(y.begin(),y.end());
        m=n = x.size();
        int dp[m+1][n+1];
        for(i=0; i<=m; i++)
            dp[i][0] = i;
        for(j=0; j<=n; j++)
            dp[0][j] = j;
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(x[i-1] == y[j-1])
                {
                    dp[i][j] = dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = 1+min(min(dp[i-1][j-1],dp[i-1][j]),dp[i][j-1]);
                }
            }
        }
        int ans = dp[m][n]/2;
        cout<<"Case "<<k<<": "<<ans<<endl;
    }
    return 0;
}
