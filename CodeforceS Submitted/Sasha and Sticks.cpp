#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n, k;
    while(cin>>n>>k)
    {
        if((n/k)%2==0)printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
