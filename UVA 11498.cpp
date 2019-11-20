#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, a, b;
    while(cin>>n)
    {
        if(n==0)
            break;
        cin>>x>>y;
        while(n--) {
            cin>>a>>b;
            if(a == x || b == y)
                cout<<"divisa"<<endl;
            else if(a > x && b > y)
                cout<<"NE"<<endl;
            else if(a < x && b > y)
                cout<<"NO"<<endl;
            else if(a < x && b < y)
               cout<<"SO"<<endl;
            else
               cout<<"SE"<<endl;
        }
    }
    return 0;
}
