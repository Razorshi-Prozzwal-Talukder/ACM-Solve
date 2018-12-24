#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    ll n;
    while(cin>>n)
    {
        ll i, u=0, r=0, ans=0, coin=0;
        char c;
        for(i=1; i<=n; i++)
        {
            cin>>c;
            if(c=='U')
            {
                u++;
                if(u>0 && r>0 && u>r)ans=u-r;
                else if(u>0 && r>0 && r>u)ans=r-u;
            }
            if(c=='R')
            {
                r++;
                if(u>0 && r>0 && u>r)ans=u-r;
                else if(u>0 && r>0 && r>u)ans=r-u;
            }
            if(ans==1)coin++;
        }
        if(n<=2)cout<<0<<endl;
        else
        cout<<coin<<endl;
    }
    return 0;
}
