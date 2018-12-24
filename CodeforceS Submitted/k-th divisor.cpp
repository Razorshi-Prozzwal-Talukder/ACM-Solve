#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[1000000];
main()
{
    ll n, k;
    while(cin>>n>>k)
    {
        ll i, val, c=0;
        val = sqrt(n)+1;
        for(i=1; i<val; i++)
        {
            if(n%i==0)
            {
                ar[c++]=i;
                if(i!=n/i)
                    ar[c++]=n/i;
            }
        }
        sort(ar, ar+c);
        if(k<=c)
            cout<<ar[k-1]<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
