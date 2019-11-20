#include<iostream>

#include<cstring>

#include<vector>
#include<queue>
using namespace std;

int main()
{
    int i,l,x,n,e,color[1000],y;
    bool b;
    queue<int>q;
    vector<int>v[1000];
    while(cin>>n)
    {
        if(n==0){
            return 0;
        }
        else
        {
            b=true;
            cin>>e;
            for(i=0; i<e; i++)
            {
                cin>>x>>y;
                v[x].push_back(y);
                v[y].push_back(x);
            }
            memset(color,-1,sizeof(color));
            color[0]=0;
            q.push(0);
            while(!q.empty())
            {
                x=q.front();
                q.pop();

                for(i=0; i<v[x].size(); i++)
                {
                    if(color[v[x][i]]==-1)
                    {
                        if(color[x]==0)
                            color[v[x][i]]=1;
                        else
                            color[v[x][i]]=0;
                        q.push(v[x][i]);
                    }
                    else
                    {
                        if(color[v[x][i]]==color[x])
                        {
                            b=false;
                            break;
                        }
                    }
                }
                if(b==false)
                {
                    break;
                }
            }
            if(b==true)
            {
                cout<<"BICOLORABLE."<<endl;
            }
            else
            {
                cout<<"NOT BICOLORABLE."<<endl;
            }
            for(i=0; i<n; i++)
            {
                v[i].clear();
            }
            q=queue<int>();
        }
    }
    return 0;
}
