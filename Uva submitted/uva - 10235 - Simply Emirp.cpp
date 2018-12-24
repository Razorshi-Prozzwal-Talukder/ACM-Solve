#include<bits/stdc++.h>
using namespace std;
long long primes[1000000+5];
bool flag[1000000+5];
main()
{
    long long int  a, b, value;
    long long int n, sum=0, i, j, temp, len=0;
    long long int number, digits, x, y, digit;
    for(a=2; a<=1000000; a++)
        flag[a]=1;
    value=sqrt(1000000)+1;
    for(a=2; a<value; a++)
    {
        if(flag[a])
        {
            for(b=a; b*a<=1000000; b++)
                flag[a*b]=0;
        }
    }
    while(scanf("%lld",&n)==1)
    {
        if(n==0)return 0;
        if(flag[n]==1)
        {
            long long int rev=0, put_num;
            put_num = n;
            while(put_num>0)
            {
                rev = 10*rev + (put_num%10);
                put_num = put_num /10;
            }
            if(flag[rev]==1 && rev!=n)printf("%lld is emirp.\n", n);
            else if(flag[rev]==1 && rev==n)printf("%lld is prime.\n", n);
            else if(flag[rev]!=1)printf("%lld is prime.\n", n);
        }
        else
            printf("%lld is not prime.\n", n);
    }
    return 0;
}
