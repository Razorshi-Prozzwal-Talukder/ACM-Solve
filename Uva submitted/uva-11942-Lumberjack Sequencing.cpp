#include<bits/stdc++.h>
using namespace std;
main()
{
    int N,i,j,k,l, lv[20],total=0,mintotal=0;
    while(scanf("%d",&N)==1)
    {
        printf("Lumberjacks:\n");
        for(i=1; i<=N; i++)
        {
            for(j=0; j<10; j++)
            {
                scanf("%d",&lv[j]);
            }
            for(k=0,j=1; k<10 && j<10; k++,j++)
            {
                if(lv[k]<lv[j])
                    total++;
                else if(lv[k]>lv[j])
                    mintotal++;
            }

            if(total<9 && mintotal<9)
            {
                printf("Unordered\n");
                total=0;
                mintotal=0;
            }
            else if(total==9 || mintotal==9)
            {
                printf("Ordered\n");
                total=0;
                mintotal=0;
            }

        }

    }
    return 0;
}
