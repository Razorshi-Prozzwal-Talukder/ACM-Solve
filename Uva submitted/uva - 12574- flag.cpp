#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int i,t;
    double j,wide,len,area_rec,radius,pi,area_of_cir, result;
    pi = 3.14159265358979323846;

    while(scanf("%lld",&t)==1)
    {
        j=0.6;
        for(i=1; i<=t; i++)
        {
            scanf("%lf",&len);
            wide = len*0.6;
            area_rec = len*wide;
            radius = len/5.00;
            area_of_cir = (pi*radius*radius);
            result = area_rec - area_of_cir;
            printf("%0.2lf %0.2lf\n",area_of_cir,result);


        }
    }
    return 0;
}
