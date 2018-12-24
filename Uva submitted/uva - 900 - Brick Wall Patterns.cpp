#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n,i,array[100000];
    while(scanf("%lld",&n)==1)
    {
        if(n==0)break;
        array[1]=1;
        array[2]=2;
        for(i=3; i<=n; i++)
        {
            array[i]=array[i-1]+array[i-2];
        }
        printf("%lld\n",array[n]);
    }
    return 0;
}
