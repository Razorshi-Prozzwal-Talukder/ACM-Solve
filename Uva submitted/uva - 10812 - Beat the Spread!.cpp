#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,s,d,res;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d %d",&s,&d);
            if(s<d)
                printf("impossible\n");
            else
            {
                if((s+d)%2==0)
                     printf("%d %d\n",(s+d)/2,(s-d)/2);
                else
                    printf("impossible\n");


            }
        }
    }
    return 0;
}
