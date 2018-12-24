#include<bits/stdc++.h>
typedef long long ll;
#define sp 10000000
ll prime[sp+10], ar[sp+10];
bool flag[sp+10];
using namespace std;
ll seive()
{
    ll i, j, total=0, val;
    for(i=2; i<=sp; i++)
        flag[i] = 1;
    val = sqrt(sp)+1;
    for(i=2; i<=val; i++)
    {
        if(flag[i])
        {
            for(j=i; i*j<=sp; j++)
                flag[j*i]=0;
        }
    }
    /*for(i=2; i<=sp; i++)
    {
        if(flag[i])
            prime[total++]=i;
    }
    return total;*/
}
/*ll divisor(ll n)
{
    ll i, val, count, sum;
    val = sqrt(n)+1;
    sum =1;
    for(i=0; prime[i]<val; i++)
    {
        if(n%prime[i]==0)
        {
            count=0;
            while(n%prime[i]==0)
            {
                n=n/prime[i];
                count++;
            }
            sum = sum*(count+1);
        }
    }
    if(n>1)sum=sum*2;

    return sum;
}*/
main()
{
    ll n;
    //ll total = seive();
    seive();
    while(cin>>n)
    {
        ll x,y,z;
        for(x=1; x<=n; x++)
        {
            cin>>z;
            y=sqrt(z);
            if(flag[y] && (y*y)==z && z>1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        /*for(ll y=1; y<=n; y++)
        {
            z=ar[y];
            ll sum = divisor(z);
            if(sum==3)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }*/
    }
    return 0;
}
