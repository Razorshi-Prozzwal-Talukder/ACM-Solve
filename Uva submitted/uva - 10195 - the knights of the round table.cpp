#include<bits/stdc++.h>
using namespace std;
main()
{
    double a,b,c,s,r;

    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        if(a==0||b==0||c==0)
            printf("The radius of the round table is: 0.000\n");
        else
        {
            s=(a+b+c)/2.00;
            a=sqrt(s*(s-a)*(s-b)*(s-c));
            r=a/s;
            printf("The radius of the round table is: %0.3lf\n",r);
        }

    }
    return 0;

}
