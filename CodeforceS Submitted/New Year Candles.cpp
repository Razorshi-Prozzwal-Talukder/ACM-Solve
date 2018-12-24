#include<bits/stdc++.h>
using namespace std;
main()
{
    int a, b;
    while(cin>>a>>b)
    {
        int ans=0;
        ans = a;
        while(a>=b)
        {
            int p=a;
            a = a/b;
            ans = ans + a;
            a = a+(p%b);
        }
        cout<<ans<<endl;
    }
    return 0;
}
