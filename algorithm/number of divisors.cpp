#include<bits/stdc++.h>
using namespace std;
#define size_n 1000
#define size_p 1000
bool flag[size_n+5];
int prime[size_p+5];

int seive()
{
    int i, j, total=0, val;
    for(i=2; i<=size_n; i++)flag[i]=1;

    val = sqrt(size_n)+1;

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
            prime[total++]=i;
    }
    return total;
}

int divisor(int n)
{
    int i, val, count, sum;
    val = sqrt(n)+1;
    sum = 1;
    for(i=0; prime[i]<val; i++)
    {
        if(n%prime[i]==0)
        {
            count=0;
            while(n%prime[i]==0)
            {
                n = n/prime[i];
                count++;
            }
            sum =sum * (count+1);
        }
    }
    if(n>1)sum=sum*2;

    return sum;
}
main()
{
    int total = seive();
    int n;
    cout<<"Numbers : ";
    while(cin>>n)
        printf("%d No of Divisors : %d\n",n,divisor(n));

    return 0;
}
