#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[1000000];
main()
{
    ll n, ar2[10];
    while(cin>>n)
    {
        ll i, one=0, two=0, three=0, four=0, five=0, p;
        for(i=1; i<=5; i++)ar2[i]=0;
        for(i=1; i<=n; i++)
            cin>>ar[i];
        for(i=1; i<=n; i++)
        {
            if(ar[i]==1)ar2[1]=ar2[1]+1;
            else if(ar[i]==2)ar2[2]=ar2[2]+1;
            else if(ar[i]==3)ar2[3]=ar2[3]+1;
            else if(ar[i]==4)ar2[4]=ar2[4]+1;
            else if(ar[i]==5)ar2[5]=ar2[5]+1;
        }
        p = max(ar2[1], max(ar2[2], max(ar2[3], max(ar2[4], ar2[5]))));
        for(i=1; i<=5; i++)
            if(ar2[i]==p)break;
            cout<<i<<endl;
    }
    return 0;
}
