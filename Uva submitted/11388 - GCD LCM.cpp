#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int test, g, l, i, ans;
    while(scanf("%lld",&test)==1)
    {
        for(i=1; i<=test; i++)
        {
            scanf("%lld %lld", &g, &l);
            if(l%g==0)
            {
                ans = (g*l)/g;
                if(ans==l)
                    printf("%lld %lld\n",g, ans);
                else
                    printf("-1\n");
            }
            else
                printf("-1\n");

        }
    }
    return 0;
}
