#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,a,b,c,i;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            if(a+b>c && b+c>a && c+a>b)
                printf("OK\n");
            else
                printf("Wrong!!\n");
        }
    }
    return 0;
}
