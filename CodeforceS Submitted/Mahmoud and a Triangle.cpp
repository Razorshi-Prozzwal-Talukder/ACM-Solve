#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[10000000];
main()
{
    ll n;
    while(cin>>n)
    {
        ll i, j, a, b, c, p=0;
        for(i=1; i<=n; i++)
            cin>>ar[i];
        sort(ar+1, ar+n+1);
        /*for(j=1; j<=n; j++)
            printf("%d ", ar[j]);*/
        for(j=1; j<=n-2; j++)
        {
            a=ar[j], b=ar[j+1], c=ar[j+2];
            if(a+b>c && b+c>a && a+c>b)
            {
                p++;
                break;
            }
        }
        if(p>0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

