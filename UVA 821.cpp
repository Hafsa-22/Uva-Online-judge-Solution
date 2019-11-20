#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int adj[105][105];
bool vis[105];

int main()
{
    int u, v, t = 1;

    while (true)
    {
        memset(adj, 63, sizeof adj);
        memset(vis, false, sizeof vis);

        scanf("%d %d", &u, &v);
        if (u == 0 && v == 0)
        {
            break;
        }

        while (true)
        {
            vis[u] = true;
            vis[v] = true;
            adj[u][v] = 1;

            scanf("%d %d", &u, &v);
            if (u == 0 && v == 0)
            {
                break;
            }
        }

        for (int k = 0; k < 105; k++)
        {
            for (int i = 0; i < 105; i++)
            {
                for (int j = 0; j < 105; j++)
                {
                    adj[i][j] = min(adj[i][j],adj[i][k] + adj[k][j]);
                }
            }
        }

        double ans = 0, c = 0;
        for (int i = 0; i < 105; i++)
        {
            for (int j = 0; j < 105; j++)
            {
                if (i == j)
                {
                    continue;
                }
                if (vis[i] && vis[j])
                {
                    ans += adj[i][j];
                    c++;
                }
            }
        }

        printf("Case %d: average length between pages = %.3lf clicks\n",t++, ans / c);
    }

    return 0;
}
