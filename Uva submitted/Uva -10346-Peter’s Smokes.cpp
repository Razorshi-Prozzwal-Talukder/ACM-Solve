#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k,m1,m2,sum=0;
    while(scanf("%d %d",&n,&k)==2)
    {
        sum=n;
        m1=n/k;
        m2=n%k;
        n=m1+m2;
        if(n>=k)
        {
            sum+=m1;
            while(k<=n)
            {

                m1=n/k;
                m2=n%k;
                n=m1+m2;
                sum+=m1;

            }
            printf("%d\n",sum);
            sum=0;
        }
        else
        {
            sum+=m1;
            printf("%d\n",sum);
            sum=0;
        }
    }
    return 0;
}
