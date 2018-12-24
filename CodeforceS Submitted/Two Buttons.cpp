#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n, m;
    while(cin>>n>>m)
    {
        ll cnt=0;
        if(n==m)cout<<"0"<<endl;
        else if(n>m)cout<<n-m<<endl;
        else if(n<m)
        {

            while(n<m)
            {
                if(m%2==0)
                {
                    cnt++;
                    m=m/2;
                }
                else if(m%2!=0)
                {
                    m++;
                    cnt++;
                    m=m/2;
                    cnt++;
                }
                if(m<n)
                {
                    cnt = cnt+n-m;
                    break;
                }
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}
