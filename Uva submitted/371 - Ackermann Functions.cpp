#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int l, h, i, limit, value, count = 0, g=0, c=0, temp;
    while(scanf("%lld %lld",&l,&h)==2)
    {

        if(l==0 && h==0)break;
        temp = 0, g=0, c=0;
        if(l>h)
        {
            temp = l;
            l = h;
            h =temp;
        }

        for(i=l; i<=h; i++)
        {
            limit =0;
            value = i;
            while(limit!=1)
            {
                if(value%2==0)
                {
                    limit = value/2;
                    count++;
                    value = limit;
                }
                else
                {
                    limit = (3*value)+1;
                    count++;
                    value = limit;
                }
            }
            if(count>c)
            {
                g=i;
                c=count;
            }
            count = 0;

        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,h,g,c);

    }
    return 0;
}
