#include<bits/stdc++.h>
using namespace std;
int as[100010];
main()
{
    int n;
    while(cin>>n)
    {
        int i, d=n*2;
        for(i=1; i<=d; i++)cin>>as[i];
        cout<<as[d-1]<<endl;
    }
    return 0;
}
