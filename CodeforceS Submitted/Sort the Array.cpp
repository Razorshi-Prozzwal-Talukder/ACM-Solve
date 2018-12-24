#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[10000099],pt[10000099];
main()
{
    ll n;
    while(cin>>n)
    {
        ll i, j, d, gt=0, start=1, endi=1, temp, v=0;
        for(i=1; i<=n; i++)
        {
            cin>>d;
            ar[i] = d;
            pt[i] = d;
        }
        sort(pt, pt+n+1);
        for(i=1; i<=n; i++)
        {
            if(ar[i]!=pt[i])
            {
                gt++;
                if(gt==1)start = i;
                endi = i;
            }
        }
        if(gt>0)
        {
            for(i=start, j=endi; i<j; i++, j--)
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
        for(i=1; i<=n; i++)
            if(ar[i]!=pt[i])v++;

        if(v==0)printf("yes\n%lld %lld\n", start, endi);
        else
            printf("no\n");

    }
    return 0;
}
