#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, c;
    while(cin>>n>>c)
    {
        int i, a[100000];
        for(i=1; i<=n; i++)cin>>a[i];
        int ans=0;
        for(i=1; i<n; i++)
        {
            ans = max(ans, a[i]-a[i+1]-c);
        }
        cout<<ans<<endl;
    }
    return 0;
}
