#include<bits/stdc++.h>
using namespace std;
int as[1000000];
main()
{
    int n;
    while(cin>>n)
    {
        int i, t1, t2, t3, d, p=0, m=0, pe=0;
        for(i=1; i<=n; i++)
        {
            cin>>d;
            as[i]=d;
            if(d==1)p++;
            else if(d==2)m++;
            else if(d==3)pe++;
        }
        int ans = min(p, min(m, pe));
        if(ans==0)printf("0\n");
        else
        {
            printf("%d\n", ans);
            for(int a=1; a<=ans; a++)
            {
                for(i=1; i<=n; i++)
                {
                    if(as[i]==1){
                        printf("%d", i);
                        as[i] = 0;
                        break;
                    }
                }
                for(i=1; i<=n; i++)
                {
                    if(as[i]==2){
                        printf(" %d", i);
                        as[i] = 0;
                        break;
                    }
                }
                for(i=1; i<=n; i++)
                {
                    if(as[i]==3){
                        printf(" %d", i);
                        as[i] = 0;
                        break;
                    }
                }
                printf("\n");
            }
        }

    }
    return 0;
}
