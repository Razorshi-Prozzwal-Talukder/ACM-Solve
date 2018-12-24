#include<bits/stdc++.h>
using namespace std;
int as[100000];
main()
{
    int n, k;
    while(cin>>n>>k)
    {
        int i, d, c=0;
        for(i=1; i<=n; i++)
        {
            cin>>d;
            if(d+k<=5)c++;
        }
        cout<<c/3<<endl;
    }
    return 0;
}
