#include<bits/stdc++.h>
using namespace std;
main()
{
    double n, m, sum1=1,sum2=1,sum3=1,sum4,i,j,k;
    while(scanf("%lf %lf",&n,&m)==2)
    {
        if(n==0 && m==0)break;
        else if(n==0 || m==0)
            printf("%.lf things taken %.lf at a time is %.lf exactly.\n",n,m,sum4=1);
        else if(n!=0 && m!=0 && n>=5 && n<=100 && m>=5 && m<=100 && n>=m)
        {

            for(i=1; i<=n; i++)
                sum1*=i;

            for(j=1; j<=m; j++)
                sum2*=j;

            for(k=1; k<=(n-m); k++)
            {
                sum3*=k;
            }
            sum4=sum1/(sum2*sum3);
            printf("%.lf things taken %.lf at a time is %.lf exactly.\n",n,m,sum4);
            sum1=1;
            sum2=1;
            sum3=1;
        }
        else if(n<m)
            printf("%.lf things taken %.lf at a time is %.lf exactly.\n",n,m,sum4=0);
    }
    return 0;
}
