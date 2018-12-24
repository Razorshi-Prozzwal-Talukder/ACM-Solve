#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, a, b;
    while(cin>>n>>a>>b)
    {
        int ans;
        ans = n-(max(a+1, n-b))+1;
        cout<<ans<<endl;
    }
    return 0;
}
