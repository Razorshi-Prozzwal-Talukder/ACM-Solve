#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n, c, d, l;
    while(cin>>n)
    {
        ll i, ans;
        for(i=1; i<=n; i++)
        {
            cin>>c>>d>>l;
            if(c==0 && d==0 && l==0)printf("yes\n");
            else if(c<=d)
            {
                if(l>=(d*4) && l<=(c+d)*4 && l%4==0 && l!=0)printf("yes\n");
                else
                    printf("no\n");
            }
            else if(c>d)
            {
                if(c>=2*d)
                {
                    ans = c-(2*d);
                    //minimum = (ans+d)*4
                    if(l>=(ans+d)*4 && l<=(c+d)*4 && l%4==0 && l!=0)printf("yes\n");
                    else
                        printf("no\n");
                }
                else if(c<2*d)
                {
                    if(l>=d*4 && l<=(c+d)*4 && l%4==0)printf("yes\n");
                    else
                        printf("no\n");
                }
            }
        }
    }
    return 0;
}
