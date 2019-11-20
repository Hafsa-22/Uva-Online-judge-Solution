#include<iostream>
#include<cstring>
using namespace std;
int dp[1003][102];
int w[1003],p[1003],g,capacity,n;
int max(int a,int b)
{
    return (a>b)? a: b;
}
int knapsack(int idx,int capacity)
{
    if(idx==n || capacity==0)
     return dp[idx][capacity]=0;
    if(dp[idx][capacity] != -1)
      return dp[idx][capacity];
    if(w[idx] > capacity)
     return dp[idx][capacity] = knapsack(idx+1,capacity);
    else
      return dp[idx][capacity]= max(p[idx]+knapsack(idx+1,capacity-w[idx]),knapsack(idx+1,capacity));
}
int main()
{
    int t,i;
    while(cin>>t)
    {
        while(t--)
        {
            cin>>n;
            for(i=0; i<n; i++)
            {
                cin>>p[i]>>w[i];
            }
            memset(dp,-1,sizeof(dp));
            long long sum=0;
            cin>>g;
            while(g--)
            {
                cin>>capacity;
                sum+=knapsack(0,capacity);
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
