#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, i,j, total=0, len[10000];
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
            scanf("%d",&len[i]);

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(len[i]>len[j])
                    total++;
            }
        }
        printf("Minimum exchange operations : %d\n",total);
        total=0;

    }
    return 0;
}
