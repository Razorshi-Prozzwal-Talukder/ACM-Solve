#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int a,b,c;

    while(scanf("%lld %lld %lld",&a,&b,&c)==3)
    {
        if(a==0 && b==0 && c==0)
            break;
        else if(a+b>c && b+c>a && c+a>b)
        {
            if(a<=0 || b<=0 || c<=0)
                printf("wrong\n");
            else if((a*a)+(b*b)==(c*c) || (b*b)==(c*c)+(a*a) || (a*a) ==(c*c)+(b*b))
                printf("right\n");
            else
                printf("wrong\n");
        }


    }
    return 0;
}
