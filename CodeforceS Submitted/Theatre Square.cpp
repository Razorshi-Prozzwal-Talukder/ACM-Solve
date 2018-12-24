#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n,m,a;
    while(scanf("%lld %lld %lld",&n,&m,&a)==3)
    {
        cout<<((n+a-1)/a)*((m+a-1)/a)<<endl;
    }
    return 0;
}
