#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int test=1,se_no;
    double u,v,s,t,a;

    while(scanf("%lld", &se_no)==1)
    {
        if(se_no==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);
            a = ((v-u)/t);
            s = ((u*t)+((a*t*t)/2));
            printf("Case %lld: %0.3lf %0.3lf\n",test,s,a);
        }
        if(se_no==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);
            t = ((v-u)/a);
            s = ((u*t)+((a*t*t)/2));
            printf("Case %lld: %0.3lf %0.3lf\n",test,s,t);
        }
        if(se_no==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);
            v = sqrt((u*u)+2*a*s);
            t = ((v-u)/a);
            printf("Case %lld: %0.3lf %0.3lf\n",test,v,t);
        }
        if(se_no==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u = sqrt((v*v)-2*a*s);
            t = ((v-u)/a);
            printf("Case %lld: %0.3lf %0.3lf\n",test,u,t);
        }
        test++;
        if(se_no==0)
            break;

    }

    return 0;
}
