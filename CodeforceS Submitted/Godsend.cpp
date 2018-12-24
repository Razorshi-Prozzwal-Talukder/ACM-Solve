#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll as[10000010];
main()
{
    ll n;
    while(cin>>n)
    {
        ll i,num, even=0, odd=0;
        for(i=1; i<=n; i++)
        {
            cin>>num;
            if(num%2!=0)odd++;
        }
        if(odd==0)printf("Second\n");
        else
            printf("First\n");
    }
    return 0;
}
