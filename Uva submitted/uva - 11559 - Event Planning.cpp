#include<bits/stdc++.h>
using namespace std;
main()
{
     long long int participant, budget, hotel, week, amount, room;
     long long int cost, a, visit, x, y;
    while(scanf("%lld %lld %lld %lld",&participant, &budget, &hotel, &week)==4)
    {
        cost=100000000;
        for(x=1;x<=hotel;x++)
        {
            scanf("%lld", &amount);
            for(y=1;y<=week;y++)
            {
                scanf("%lld",&room);
                a=0;
                if(room>=participant)
                {
                    a=amount*participant;
                    if(cost>a)
                    cost=a;
                }
            }
        }
            if(cost>budget)
            printf("stay home\n");
            else
            printf("%lld\n",cost);
            cost=100000000;
        }
        return 0;
}
