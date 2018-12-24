#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll k, l;
    while(cin>>k>>l)
    {
       ll i, ans=0;
       for(i=l; i>1; )
       {
           if(i%k==0)
           {
               i=i/k;
               ans++;
           }
           else
           {
               cout<<"NO"<<endl;
               return 0;
           }
       }
       cout<<"YES"<<endl<<ans-1<<endl;
    }
    return 0;
}
