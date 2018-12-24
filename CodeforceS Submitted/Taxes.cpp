#include<bits/stdc++.h>
using namespace std;
#define pp 10000000
typedef long long ll;
ll  n;//prime[n+10];
ll seive(ll n)
{
    ll i,j, val,total=0;
    val=sqrt(n);
    for(i=2; i<=val; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
main()
{
    while(cin>>n)
    {
        if(n==2)printf("1\n");
        else if(seive(n))printf("1\n");
        else if(!seive(n))
        {
            if(n%2==0 || seive(n-2))printf("2\n");
            else
                printf("3\n");
        }

    }
    return 0;
}
