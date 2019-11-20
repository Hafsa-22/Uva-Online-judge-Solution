#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n,ant,min=0,max=0;
        cin>>l>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ant;
            int len = l - ant;
            if(len >= ant)
            {
                if(max < len)
                {
                    max = len;
                }
                if(min < ant)
                {
                    min = ant;
                }
            }
            if(len < ant)
            {
                if(max < ant)
                {
                    max = ant;
                }
                if(min < len)
                {
                    min = len;
                }
            }
        }
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}
