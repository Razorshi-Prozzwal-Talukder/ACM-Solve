#include<stdio.h>
int main()
{
    int t,n,p,q,i,j,gm[100],sum=0,total=0;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d %d %d",&n,&p,&q);

            for(j=0; j<n; j++)
            {
                scanf("%d",&gm[j]);
            }
            for(j=0; j<n && j<p; j++)
            {
                sum+=gm[j];
                if(sum>q)break;
                total++;
            }
            printf("Case %d: %d\n",i,total);
            sum=0;
            total=0;
        }
    }
    return 0;
}
