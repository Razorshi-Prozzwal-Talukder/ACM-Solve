#include<stdio.h>
int range(int x, int y)
    {
        int i,j,k=0;
        if(x<y)
        {
            for(i=x; i<=y; i++)
            {
                if(i%2==0)
                {
                    k++;
                }
            }
            return k;
        }
        else
        {
             for(i=y; i<=x; i++)
            {
                if(i%2==0)
                {
                    k++;
                }
            }
            return k;

        }

    }
    int main()
    {
        int a,b,c;
        printf("Press Your Range: ");
        scanf("%d %d",&a,&b);
        c=range(a,b);

        printf("Total Even Number is: %d\n",c);
    }


