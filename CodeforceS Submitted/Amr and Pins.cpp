#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int r, x, y, x1, y1;
    while(cin>>r>>x>>y>>x1>>y1)
    {
        long long int ans;
        double d;
        d = sqrt(((x1-x)*(x1-x))+((y1-y)*(y1-y)));
        ans = ceil(d/(2*r));
        cout<<ans<<endl;
    }
    return 0;
}
