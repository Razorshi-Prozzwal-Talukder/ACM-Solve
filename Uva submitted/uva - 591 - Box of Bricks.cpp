#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,height[100],i,j,sum1=0,sum2=0,sum3=0,incri=1,dis=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        else if(n>=1 && n<=50)
        {
            for(i=0; i<n; i++)
            {
                scanf("%d",&height[i]);
            }
            for(i=0; i<n; i++)
            {
                sum1+=height[i];
            }
            sum2=sum1/n;
            for(j=0; j<n; j++)
            {
                if(height[j]>sum2)
                {
                    dis=height[j]-sum2;
                    sum3+=dis;
                }
            }
            printf("Set #%d\nThe minimum number of moves is %d.\n\n",incri,sum3);
            sum1=0;
            sum3=0;
            incri++;
        }

    }
    return 0;
}
