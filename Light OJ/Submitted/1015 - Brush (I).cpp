#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    while(cin>>t)
    {
        int i, ans, a, b;
        for(i=1; i<=t; i++)
        {
            cin>>a;
            ans=0;
            for(int j=1; j<=a; j++)
            {
                cin>>b;
                if(b>=0 && b<=99)ans+=b;
            }
            printf("Case %d: %d\n", i, ans);
        }
    }
    return 0;
}
