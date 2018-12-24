#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int test,n,arr[100],i,j,k,l;
    while(scanf("%lld",&test)==1)
    {
        for(i=1; i<=test; i++)
        {
            scanf("%lld",&n);
            for(j=0; j<n; j++)
            {
                scanf("%lld",&arr[j]);
            }
           sort(arr,arr+n);
            printf("Case %lld: %lld\n",i,arr[n-1]);
        }
    }
    return 0;
}
