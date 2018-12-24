#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int test,i, a,b,c,d;
    while(scanf("%lld",&test)==1)
    {
        for(i=1; i<=test; i++)
        {
            scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
            if(a==b&&c==d&&a==c&&b==d)
                printf("square\n");
            else if( (a==b && c==d) || (b==c && d==a) || (a==c&& b==d))
                printf("rectangle\n");
            else if(a+b+c>=d && a+d+c>=b && a+b+d>=c && d+b+c>=a)
                printf("quadrangle\n");
            else
                printf("banana\n");
        }
    }
    return 0;
}
