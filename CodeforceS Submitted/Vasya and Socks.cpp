#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int ans;
        ans = n+(floor((n-1)/(m-1)));
        cout<<ans<<endl;
    }
    return 0;
}
