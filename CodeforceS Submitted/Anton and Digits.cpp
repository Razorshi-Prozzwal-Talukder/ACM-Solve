#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll k2, k3, k5, k6;
    while(cin>>k2>>k3>>k5>>k6)
    {
        ll min_f_s, two_f_s, sum, min_th_t;
        min_f_s = min(k5, k6);
        if(k2>=min_f_s)
            k2 = k2 - min_f_s;
        else
        {
            min_f_s = k2;
            k2 = 0;
        }
        min_th_t = min(k2, k3);
        sum = (256 * min_f_s) + (32 * min_th_t);
        cout<<sum<<endl;
    }
    return 0;
}
