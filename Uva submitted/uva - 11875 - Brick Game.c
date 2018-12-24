#include<stdio.h>
int main()
{
    int test,team_member, age[30],i,j,k;
    while(scanf("%d",&test)==1)
    {
        for(i=1; i<=test; i++)
        {
            scanf("%d",&team_member);
            if(team_member/2!=0)
            {
                for(j=1; j<=team_member; j++)
                {
                    scanf("%d",&age[j]);
                }
                k=(team_member/2)+1;
                printf("Case %d: %d\n",i,age[k]);
            }
        }
    }
    return 0;
}
