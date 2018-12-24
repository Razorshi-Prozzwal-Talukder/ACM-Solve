#include<bits/stdc++.h>
using namespace std;
main()
{
    int a, b, dif1=0, dif2=0, mainch1, mainch2,i;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==-1 && b==-1)break;
        else
        {
            if(a<b)
            {
                for(i=a; i<=b; i++)
                {
                    dif1++;
                }
                mainch1=dif1-1;
                for(i=100; i>=b; i--)
                {
                    dif2++;
                }
                mainch2=(dif2-1)+a;
                if(mainch1<=mainch2)
                {
                    printf("%d\n",mainch1);
                    dif1=0;
                    dif2=0;
                }
                else
                {
                    printf("%d\n",mainch2);
                    dif1=0;
                    dif2=0;
                }
            }
            else
            {
                for(i=b; i<=a; i++)
                {
                    dif1++;
                }
                mainch1=dif1-1;
                for(i=100; i>=a; i--)
                {
                    dif2++;
                }
                mainch2=(dif2-1)+b;
                if(mainch1<=mainch2)
                {
                    printf("%d\n",mainch1);
                    dif1=0;
                    dif2=0;
                }
                else
                {
                    printf("%d\n",mainch2);
                    dif1=0;
                    dif2=0;
                }
            }
        }
    }
    return 0;
}
