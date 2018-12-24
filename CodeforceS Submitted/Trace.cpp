#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;
int as[10000];
main()
{
    int n;
    while(cin>>n)
    {
        int i, red=0, blue=0;
        double ans;
        for(i=1; i<=n; i++)cin>>as[i];

        sort(as, as+n+1);

        for(i=n; i>=1; i=i-2)red+=(as[i]*as[i]);
        for(i=n-1; i>=1; i=i-2)blue+=(as[i]*as[i]);

        ans = PI * (red-blue);
        cout<<setprecision(10)<<ans<<endl;  ///setprecision(10) use for long number....it can be accepted without using this
    }
    return 0;
}
