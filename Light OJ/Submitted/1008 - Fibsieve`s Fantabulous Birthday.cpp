#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll test, s, p=1, x, y;
    cin>>test;
    while(test--)
    {
        cin>>s;
        x = ceil(sqrt(s));
        y = x*x-x + 1;

        if(x%2==0)
        {
            if(s<y)
                cout<<"Case "<<p++<<": "<<x-y+s<<" "<<x<<endl;
            else
                cout<<"Case "<<p++<<": "<<x<<" "<<x-s+y<<endl;
        }
        else
        {
            if(s<y)
                cout<<"Case "<<p++<<": "<<x<<" "<<x-y+s<<endl;
            else
                cout<<"Case "<<p++<<": "<<x-s+y<<" "<<x<<endl;
        }
    }
    return 0;
}
