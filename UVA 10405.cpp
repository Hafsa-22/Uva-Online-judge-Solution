#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int lcs[1010][1010];
char x[1010];
char y[1010];

int main(){

    while(gets(x) != NULL){
        gets(y);
        int n=strlen(x);
        int m=strlen(y);
        if(n==0 || m==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        for(int i=0;i<=n;++i){
            lcs[i][0] = 0;
        }
        for(int i=0;i<=m;++i){
           lcs[0][i] = 0;
        }
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=m;j++)
            {
                if(x[i-1]==y[j-1])
                {
                    lcs[i][j]=lcs[i-1][j-1]+1;
                }
                else
                {
                    lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
                }
            }
        }

        printf("%d\n",lcs[n][m]);
    }

    return 0;
}
