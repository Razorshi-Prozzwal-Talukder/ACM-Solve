#include<bits/stdc++.h>
using namespace std;
char po[10001], chr[10000];
main()
{
    int n, valu[10001];
    while(cin>>n)
    {
        while(n--)
        {
            int i, j, val, v, sum=0, p;

            cin>>val;
            for(i=0; i<val; i++)
            scanf("%c %d", &chr[i], &valu[i]);

            po[0]='\0';
              cin>>p>>endl;
            while(p--)
            {
                gets(po);
                for(j=0; j<val; j++)
                {
                    for(i=0; i<strlen(po); i++)
                    {
                        if(chr[j]==po[i])sum+= valu[j];

                    }
                }
                po[0]='\0';
            }
            printf("%.2lf$\n", sum/100);
        }
    }
    return 0;
}
