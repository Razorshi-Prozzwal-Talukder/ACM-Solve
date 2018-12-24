#include<bits/stdc++.h>
using namespace std;
#define size_n 1000
#define size_p 1000
bool flag[size_n+5];
int prime[size_p+5];

int seive()
{
    int val, i, j, total=0;
    for(i=2; i<=size_n; i++)flag[i]=1;

    val = sqrt(size_n)+1;

    for(i=2; i<=val; i++)
    {
        if(flag[i])
        {
            for(j=i; i*j<=size_n; j++)
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

int sum_of_divisor(int n)
{
    int count, val, i, sum, p, s;

    val = sqrt(n)+1;

    sum = 1;
    for(i=0; prime[i]<val; i++)
    {
        if(n%prime[i]==0)
        {
            p=1;
            while(n%prime[i]==0)
            {
                n = n/prime[i];
                p = p*prime[i];
            }
            p = p*prime[i];
            s = (p-1)/(prime[i]-1);
            sum = sum*s;
        }
    }
    if(n>1)
    {
        p = n*n;
        s = (p-1)/(n-1);
        sum = sum*s;
    }
    return sum;
}
main()
{
    int total = seive();
    int n;
    cout<<"Number is: ";
    while(cin>>n)
        printf("%d Sum of divisor is: %d\n",n,sum_of_divisor(n));
    return 0;
}
