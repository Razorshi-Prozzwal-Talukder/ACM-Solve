#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll as[1000010];
main()
{
    ll n;
    while(cin>>n)
    {
        ll i, ans=0, ans2=0, c=0;
        for(i=1; i<=n; i++)
        {
            cin>>as[i];
            if(i<=2)ans++;
           else
            {
                if(as[i-1]+as[i-2]==as[i])c++;
                else
                    c=0;
            }
            ans2=max(ans2, c);
        }
        cout<<ans+ans2<<endl;
    }
    return 0;
}
