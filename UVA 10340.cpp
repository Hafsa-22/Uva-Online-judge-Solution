#include<bits/stdc++.h>
using namespace std;
int main()
{
   string x,y;
    while(cin>>x>>y)
    {
        //scanf("%s",y);
        int m = x.size();
        int n = y.size();
        int j=0,i;
        for(i=0;i<n && j<m;i++)
        {
            if(x[j]==y[i])
            {
                j++;
            }
        }
        if(j==m)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
