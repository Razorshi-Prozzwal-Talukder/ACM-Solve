#include<bits/stdc++.h>
#define si 1000000
typedef long long ll;
using namespace std;
int prime[si+5];
ll flag[si+5];
ll count_p[si+5];

int rev_n(int n)
{
    int r = 0;
    int x = n;
    while(x!=0)
    {
        r = r+(x%10);
        x = x/10;
    }
    return r;
}

void seive()
{
    ll i, j, val, cont=0, l;
    for(i=2; i<=si; i++)
        flag[i]=true;

    val = sqrt(si)+1;
    flag[0]=false;
    flag[1]=false;
    for(i=2; i<=val; i++)
    {
        if(flag[i])
        {
            for(j=i; j*i<=si; j++)
                flag[i*j]=false;
        }
    }
    for(l=0; l<=si; l++)
    {
        if(flag[l] && flag[rev_n(l)])cont++;

        count_p[l] = cont;
    }
}
main()
{
    ll n, t1, t2;
    seive();
    while(cin>>n)
    {
        ll k, result=0;
        for(k =1; k<=n; k++)
        {
            cin>>t1>>t2;
            result = abs(count_p[t2] - count_p[t1-1]);
            cout<<result<<endl;
        }
    }
    return 0;
}
