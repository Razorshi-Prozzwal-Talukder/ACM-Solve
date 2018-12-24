#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n,array[10000],i,j,k=0,sum=0;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        for(i=1; i<n; i++)
        {
            if(n%i==0)
            {
                array[k]=i;
                k++;
            }
        }
        for(j=0; j<k; j++)
        {
            sum+=array[j];
        }

        if(sum<n)
        {
            printf("%5lld  DEFICIENT\n",n);
            sum=0;
            k=0;
        }
        else if(sum==n)
        {
            printf("%5lld  PERFECT\n",n);
            sum=0;
            k=0;
        }
        else if(sum>n)
        {
             printf("%5lld  ABUNDANT\n",n);
            sum=0;
            k=0;
        }

    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
