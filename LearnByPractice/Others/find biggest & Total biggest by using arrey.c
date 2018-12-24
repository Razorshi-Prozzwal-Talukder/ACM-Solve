#include<stdio.h>///find the biggest number & total biggest number
int main()
{
    int i,j,k,l=0,x=0,y,m,n,maximum;///x=how many big numbers
    int a[10];

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&m);

    for(j=0; j<n; j++)
    {
        if(m<a[j])
        {
            l=a[j];

            x++;
        }
    }
    if(x==0)
    {
        printf("No Bigger Number\n.\n");
    }

    else if(x==1)
    {
        printf("The Bigger Number is %d\nTotal: %d\n",l,x);
    }
    else if(x>1)
    {
        x=0;
        printf("The Bigger Numbers are: ");
        for(k=0; k<n; k++)
        {
             if(m<a[k])
            {
                printf("%d ",a[k]);
                x++;
            }

        }
        printf("\nTotal: %d\n",x);
    }

    return 0;
}

