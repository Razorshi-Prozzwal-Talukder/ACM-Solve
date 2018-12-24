#include <stdio.h>///here a & b are two integer Numbers
#include <math.h>
int main()
{
    int i,j,k=0,a,b;
    double root;
    for(i=1; i<=201; i++)
    {
        scanf("%d %d",&a,&b);
        if(a==0 && b==0)
        {
            break;
        }
        for(j=a; j<=b; j++)
        {
           root=sqrt((double)j);
           if((root-(int)root)==0)
                k++;
        }
        printf("%d\n",k);
        k=0;
    }
}
