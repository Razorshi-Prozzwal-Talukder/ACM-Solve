#include<bits/stdc++.h>
using namespace std;
#define size_n 1000
#define size_p 1000
bool flag[size_n+5];
long long int primes[size_p+5];


long long int seive()
{
    long long int i,j,total=0, val;
    for(i=2; i<=size_n; i++)
        flag[i]=1;

    val = sqrt(size_n)+1;

    for(i=2; i<val; i++)
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
            primes[total++];
    }

    return total;
}

long long divisors(long long int n)
{
    long long int i, val, count, sum;
    val = sqrt(n)+1;
    sum=1;

    for(i=0; primes[i]<val; i++)
    {
        if(n%primes[i]==0)
        {
            count=0;
            while(n%primes[i]==0)
            {
                n/=primes[i];
                count++;
            }
            sum*=(count+1);

        }
    }
    if(n>1)
        sum=sum*2;

    return sum;
}
main()
{
    long long int total = seive();
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        printf("%lld no of devisors: %lld\n",n,divisors(n));
    }
    return 0;
}
