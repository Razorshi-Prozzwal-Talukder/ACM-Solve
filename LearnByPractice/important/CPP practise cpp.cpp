#include<bits/stdc++.h>
using namespace std;

#define size_p 100
int primes[size_p+5];

int seive()
{
    int i,j,total=0,val,size_n;
    cin>>size_n;
    bool flag[size_n+5];

    for(i=2; i<=size_n; i++)
    {
        flag[i]=1;
    }
    val=sqrt(size_n)+1;
    for(i=2; i<val; i++)
    {
       if(flag[i])
       {
           for(j=i; j*i<=size_n; j++)
           {
               flag[i*j]=0;
           }
       }
    }
    for(i=2; i<=size_n; i++)
    {
        if(flag[i])
            primes[total++]=i;
    }
    return total;
}
int main()
{
    int total,i,size_n;


    total= seive();
    printf("Total Primes: %d\n",total);

    for(i=0; i<total; i++)
        printf("%d\t",primes[i]);

    return 0;

}
