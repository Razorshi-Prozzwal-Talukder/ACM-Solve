#include<bits/stdc++.h>
using namespace std;
main()
{
    int t, i, a, b;
    while(cin>>t)
    {
        for(int i=1; i<=t; i++)
        {
            cin>>a>>b;
            printf("Case %d: %d\n", i, a+b);
        }
    }
    return 0;
}
