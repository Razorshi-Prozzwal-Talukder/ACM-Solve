#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n, mail=0, total=1, c=0, i, con=1;
    while(scanf("%lld",&n)==1)
    {
        if(n<0)break;
        else
        {
            if(n==0)printf("%lld %lld\n",mail,total);
            else
            {
                for(i=1; i<=n; i++)
                {
                    c =(total+mail)+1;
                    mail = total;
                    total = c;

                }
                printf("%lld %lld\n",mail,total);
                mail = 0;
                total = 1;
                c = 0;
            }
        }

    }
    return 0;
}

