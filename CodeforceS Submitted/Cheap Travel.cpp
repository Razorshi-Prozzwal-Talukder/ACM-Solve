#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, m, a, b;
    while(cin>>n>>m>>a>>b)
    {
        int ttk1, ttk2, ans1, ans2, a1, a2;
        ttk1 = n*a;
        ans1 = n/m;
        ans2 = n%m;
        ttk2 = ans1*b;
        if(ans2 != 0)
        {
            a1 = ttk2 + (ans2*a);
            a2 = ttk2 + b;
            ttk2 = min(a1, a2);
        }
        cout<<min(ttk1, ttk2)<<endl;
    }
    return 0;
}
