#include<bits/stdc++.h>
using namespace std;
int ma[10000], mi[10000];
main()
{
    int d, sumtime;
    while(cin>>d>>sumtime)
    {
        int i, maxi=0, mini =0, sum=0, ta=1, ti=1, a;
        for(i=1; i<=d; i++)
        {
            cin>>mi[i]>>ma[i];
            mini = mini + mi[i];
            maxi = maxi + ma[i];
        }
        if(sumtime<mini || sumtime>maxi)printf("NO\n");
        else
        {
            printf("YES\n");
            sumtime = sumtime - mini;
            while(sumtime)
            {
                for(i=1; i<=d; i++)
                {
                    if(mi[i]<ma[i])
                    {
                        mi[i]++;
                        sumtime--;
                        if(sumtime==0)break;
                    }
                }
            }
            for(i=1; i<=d; i++)printf("%d ", mi[i]);
            printf("\n");
        }
    }
    return 0;
}
