#include<bits/stdc++.h>
using namespace std;
main()
{
    double t, radius,i,length,leftside,rightside,wide,half;
    while(scanf("%lf",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%lf",&radius);
            length=radius*5;
            leftside=(length*0.45);
            rightside=(length*0.55);
            wide=(length*0.6);
            half=wide/2;
            printf("Case %.lf:\n",i);
            printf("-%.lf %.lf\n",leftside,half);
            printf("%.lf %.lf\n",rightside,half);
            printf("%.lf -%.lf\n",rightside,half);
            printf("-%.lf -%.lf\n",leftside,half);
        }
    }
    return 0;

}
