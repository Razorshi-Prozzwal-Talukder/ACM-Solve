#include<bits/stdc++.h>
using namespace std;
bool flag[1000];
int prime[1000];
int seive()
{
    int i, j, total=0, val;
    for(i=2; i<=1000; i++)flag[i]=1;
    val = sqrt(1000)+1;
    for(i=2 ; i<val; i++)
    {
        if(flag[i])
        {
            for(j=i; j*i<=1000; j++)
                flag[i*j]=0;
        }
    }
    for(i=2; i<=1000; i++)
    {
        if(flag[i])
        {
            prime[total++]= i;
        }
    }
    return total;
}
int store_prime[1000], freq_prime[1000], store_divisor[1000], total_prime, ans=0;
void divisor(int n)
{
    int i, val, count;
    val = sqrt(n)+1;
    total_prime= 0;
    for(i=0; prime[i]<val; i++)
    {
        if(n%prime[i]==0)
        {
            count=0;
            while(n%prime[i]==0)
            {
                n/=prime[i];
                count++;
            }
            store_prime[total_prime] = prime[i];
            freq_prime[total_prime] = count;
            total_prime++;
            val = sqrt(n)+1;
        }
    }
    if(n>1)
    {
        store_prime[total_prime] = n;
        freq_prime[total_prime] = 1;
        total_prime++;
    }
}
void Generate(int cur, int num)
{
    int i, val;
    if(cur==total_prime)
        store_divisor[ans++]= num;
    else
    {
        val =1;
        for(i=0; i<=freq_prime[cur]; i++)
        {
            Generate(cur+1, num*val);
            val = val*store_prime[cur];
        }
    }
}
main()
{
    int total=seive();
    int n,i;

    while(scanf("%d",&n)==1)
    {
        divisor(n);
        ans=0;
        Generate(0,1);
        sort(&store_divisor[0],&store_divisor[ans]);

        printf("Total No of Divisors: %d\n",ans);
        for(i=0; i<ans; i++)
            printf("%d ",store_divisor[i]);
        printf("\n");
    }
    return 0;
}

