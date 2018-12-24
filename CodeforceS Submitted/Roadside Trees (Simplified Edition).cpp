#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll as[100000+100];
main()
{
    ll n;
    while(cin>>n)
    {
        ll i, hi, sum=0;
        for(i=1; i<=n; i++)
        {
            cin>>hi;
            as[i] = hi;
            if(i==1)sum = hi+1;
            else
            {
                if(as[i]>as[i-1])sum = sum + 1 + (as[i]-as[i-1]) + 1;
                else if(as[i]<as[i-1])sum = sum + (as[i-1]-as[i]) + 1 + 1;
                else
                    sum = sum + 1 + 1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
