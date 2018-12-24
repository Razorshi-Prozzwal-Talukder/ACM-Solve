#include<bits/stdc++.h>
using namespace std;
main()
{
    int test,i,n,m,row,coloum;
    while(scanf("%d",&test)==1)
    {
        for(i=1; i<=test; i++)
        {
            scanf("%d %d",&n,&m);
            row = n/3;
            coloum = m/3;
            printf("%d\n",row*coloum);

        }
    }
    return 0;
}
