#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int a,l, b, test=1, count=0;
    while(scanf("%lld %lld",&a,&l)==2)
    {
        if(a<0 && l<0)break;
        b=a;
        while(b<=l)
        {
            if(b==1)
            {
                count++;
                break;
            }
            else if(b%2==0)
            {
                b=b/2;
                count++;
            }
            else if(b%2!=0)
            {
                b=(3*b)+1;
                count++;
            }

        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",test,a,l,count);
        count=0;
        test++;
    }
    return 0;
}
