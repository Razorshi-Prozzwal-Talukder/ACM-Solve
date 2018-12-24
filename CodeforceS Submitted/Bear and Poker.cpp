#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll as[10000000];
main()
{
    ll n;
    while(cin>>n)
    {
        ll i, m, big=0, oto=0;
        for(i=0; i<n; i++){
            cin>>as[i];
            while(as[i]%2==0)as[i]=as[i]/2;
            while(as[i]%3==0)as[i]=as[i]/3;
        }

        for(i=1; i<n; i++)
        {
            if(as[i]!=as[0])
            {
                oto++;
                break;
            }
        }
        if(oto>0)printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}
