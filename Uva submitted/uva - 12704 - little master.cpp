#include<bits/stdc++.h>
using namespace std;
main()
{
    int test,i;
    double p1,p2,r,cal;
    while(scanf("%d",&test)==1)
    {
        for(i=1; i<=test; i++)
        {
            scanf("%lf %lf %lf",&p1,&p2,&r);
            cal=sqrt(pow(p1,2)+pow(p2,2));
            printf("%0.2lf %0.2lf\n",r-cal,r+cal);

        }
    }
    return 0;
}
