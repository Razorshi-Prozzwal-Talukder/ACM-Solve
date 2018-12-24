#include<bits/stdc++.h>
#define pf printf
#define pi  2 * acos (0.0)
using namespace std;
main()
{
    double r, ans;
    int i;
    cin>>i;
    for(int j=1; j<=i; j++)
    {
       cin>>r;
        pf("Case %d: %0.2lf\n", j, ((r+r)*(r+r))-(pi*r*r));
    }
return 0;
}
