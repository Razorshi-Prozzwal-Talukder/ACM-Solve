#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,m1,m2,sum=0;

    for(i=1; i<=10; i++)
    {
        scanf("%d",&n);

        if(n==0) break;

        else if(n==1)
            printf("%d\n",sum);
        else if(n==2)
        {
            printf("%d\n",sum+1);
            sum=0;
        }
        else if(n>=3)
        {
            while(3<=n)
            {
                m1=n/3;
                m2=n%3;
                sum+=m1;
                n=m1+m2;
            }
            if(n==2)
            {
                printf("%d\n",sum+1);
                sum=0;
            }
            else
            {
                printf("%d\n",sum);
                sum=0;
            }
        }



    }
    return 0;
}
