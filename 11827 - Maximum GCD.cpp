#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int n,i,j,num[100];
    string s;

    cin>>n;
    //getchar();
    while(n--)
    {
        int temp, ans =0,k=0;
        getline(cin,s);
        stringstream ss(s);  // string to integer

        while(ss >> temp)
        {
            num[k++] = temp;
        }
        for(i=0; i<k; i++)
        {
            for(j=i+1; j<k; j++)
            {
                ans = max(ans,gcd(num[i],num[j]));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

