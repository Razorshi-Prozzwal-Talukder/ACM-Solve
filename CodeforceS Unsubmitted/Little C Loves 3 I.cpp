#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    ll n;
    while(cin>>n)
    {
        ll a=1, b=1, c=n-2;
        if(c%3==0)c--;
        while((a+b+c)!=n)
        {
            b++;
            if(b%3==0)
            {
                b++;
                c--;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;;
    }
    return 0;
}
