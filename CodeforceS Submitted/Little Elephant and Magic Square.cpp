#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000][1000];
main()
{
    ll i, j, sum=0, x, y, z;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>a[i][j];
            sum = sum+a[i][j];
        }
    }
    sum=sum/2;
    a[0][0] = sum-(a[0][1]+a[0][2]);
    a[1][1] = sum-(a[1][0]+a[1][2]);
    a[2][2] = sum-(a[2][0]+a[2][1]);
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)printf("%lld ", a[i][j]);

            printf("\n");
    }
    return 0;
}
