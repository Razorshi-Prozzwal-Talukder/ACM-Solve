#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, m;
    while(cin>>n>>m)
    {
        double ans1, ans, a, b;
        cin>>a>>b;
        ans1=(a/b)*m;
        for(int i=1; i<n; i++)
        {
            cin>>a>>b;
            ans = (a/b)*m;
            if(ans1>ans) ans1=ans;
        }
        printf("%.8llf\n",ans1);
    }
    return 0;
}
