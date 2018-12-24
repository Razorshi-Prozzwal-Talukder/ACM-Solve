#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,l,len[100],t=0,i,j,k;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&l);
            for(j=0; j<l; j++)
                scanf("%d",&len[j]);
            for(j=0; j<l; j++)
            {
                for(k=j+1; k<l; k++)
                {
                    if(len[j]>len[k])
                        t++;
                }
            }
            printf("Optimal train swapping takes %d swaps.\n",t);
            t=0;
        }
    }
    return 0;
}
