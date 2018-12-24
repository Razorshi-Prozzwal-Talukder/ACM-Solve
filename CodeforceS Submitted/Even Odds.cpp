#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n, k;
    while(cin>>n>>k)
    {
       if(n%2!=0)
       {
           if(k>(n/2)+1)cout<<(k-(n/2+1))*2<<endl;
           else
            cout<<k*2-1<<endl;
       }
       else
       {
           if(k>n/2)cout<<(k-n/2)*2<<endl;
           else
            cout<<k*2-1<<endl;
       }
    }
    return 0;
}
