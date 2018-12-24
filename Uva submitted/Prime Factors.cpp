#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define size_n 1000000
bool flag[size_n];
ll prime[size_n];
int seive()
{
    ll i, j, total=0, val;
    for(i=2; i<=size_n; i++)flag[i]=1;
    val = sqrt(size_n)+1;
    flag[0]=flag[1]=0;

    for(i=2; i<=val; i++)
    {
        if(flag[i])
        {
            for(j=i; j*i<=size_n; j++)
                flag[i*j]=0;
        }
    }
    for(i=2; i<=size_n; i++)
    {
        if(flag[i])
        {
            prime[total]=i;
            total++;
        }
    }
    return total-1;
}
main()
{
    ll n, i, j, q;
    int mark = seive();
    while(cin>>n)
    {
        if(n==0)break;
        cout<<n<<" "<<"=";
        if(n<0)
        {
            printf(" -1 x");
            n = -n;
        }
        if(n==1)
        {
            printf(" 1\n");
            continue;
        }
        for(j=0; prime[j]<n && j<mark; j++)
        {
            while(n%prime[j]==0)
            {
                n = n/prime[j];
                if(n>1)printf(" %lld x", prime[j]);
                else
                    printf(" %lld", prime[j]);
            }
        }
        if(n>1)
            printf(" %lld", n);
        printf("\n");
    }
    return 0;
}
