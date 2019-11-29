#include<iostream>
#include<vector>
#include<algorithm>
#define Size 128
using namespace std;
int main()
{
    int n,m,i,j,k,t;
    char u,v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector< vector<int> > g1(Size, vector<int>(Size,0));
        for(i=0;i<n;i++)
        {
            cin>>u>>v;
            g1[u][v]=1;
        }
        for(k=0;k<Size;k++)
        {
            for(i=0;i<Size;i++)
            {
                for(j=0;j<Size;j++)
                {
                    if(g1[i][k] && g1[k][j])
                        g1[i][j] =1;
                }
            }
        }
        cin>>m;
        vector< vector<int> > g2(Size, vector<int>(Size,0));
        for(i=0;i<m;i++)
        {
            cin>>u>>v;
            g2[u][v]=1;
        }
        for(k=0;k<Size;k++)
        {
            for(i=0;i<Size;i++)
            {
                for(j=0;j<Size;j++)
                {
                    if(g2[i][k] && g2[k][j])
                        g2[i][j] =1;
                }
            }
        }
        if(g1==g2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        if(t)
        {
            cout<<endl;
        }
    }
    return 0;
}
