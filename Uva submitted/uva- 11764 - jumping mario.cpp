#include<bits/stdc++.h>
using namespace std;
main()
{
    int test, number_of_walls, height[51], to_high=0, to_low=0, i, j, k, jump,a,b,c;

    while(scanf("%d",&test)==1)
    {
        for(i=1; i<=test; i++)
        {
            scanf("%d",&number_of_walls);
            for(j=1;j<=number_of_walls;j++)
            {
                scanf("%d",&height[j]);


            }
            for(k=1,j=2; k<=number_of_walls && j<=number_of_walls; k++,j++)
            {
                if(height[k]<height[j])
                    to_high++;
                if(height[k]>height[j])
                    to_low++;
            }
            printf("Case %d: %d %d\n",i,to_high,to_low);
            to_low=0;
            to_high=0;

        }
    }
    return 0;
}
