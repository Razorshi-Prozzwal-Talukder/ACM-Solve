#include<bits/stdc++.h>
using namespace std;
long long int primes[1000050];
bool flag[1000050];
main()
{
    long long int number,total=0,i,j,a,b,valu,ans=0;
    for(a=2; a<=1000010; a++)
    {
        flag[a]=1;
    }
    valu=sqrt(1000010)+1;
    for(a=2; a<valu; a++)
    {
        if(flag[a])
        {
            for(b=a; b*a<=1000010; b++)
                flag[a*b]=0;
        }
    }
    while(scanf("%lld",&number)==1)
    {
        if(number==0)break;
        for(i=2; i<=number/2; i++)
        {
            if(flag[i]==1)
            {
                if(flag[number-i]==1)
                {
                    cout<<number<<" = "<<i<<" + "<<number-i<<endl;
                    ans++;
                }
            }
            if(ans==1)break;
        }
        if(ans==0)
            printf("Goldbach's conjecture is wrong.\n");

        ans=0;
    }


    return 0;
}
