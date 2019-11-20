#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int high =0, low=0;
        for(int k=0;k<(n-1);k++)
        {
            if(a[k]> a[k+1])
            {
                low++;
            }
            else if(a[k]<a[k+1])
            {
                high++;
            }
        }
        cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
    }
    return 0;
}
