#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,x=0;
    int a[100];

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&m);
    for(j=0; j<n; j++)
    {
        if(a[j]<m)
        {
            l=a[j];
            x++;
        }
    }
    if(x<=0)
    {
        printf("No Minimum Number.\n");
    }
    else if(x==1)
    {
        printf("The Smaller Number is: %d\n",l);
        printf("Total: %d\n",x);
    }
    else if(x>1)
    {
        x=0;
        printf("The Smaller Numbers are: ");
        for(k=0; k<n; k++)
        {
            if(a[k]<m)
            {
                printf("%d ",a[k]);
                x++;
            }
        }
        printf("\nTotal: %d\n",x);

    }

    return 0;
}

