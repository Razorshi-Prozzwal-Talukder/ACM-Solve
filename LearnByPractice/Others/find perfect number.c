#include<stdio.h>
int main()
{
    int j,i,k=0,n,l;
    printf("Press How Many Numbers You Should Check: ");

   scanf("%d",&j);

   for(l=1; l<=j; l++)
   {
       scanf("%d", &n);

    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            k=k+i;
        }
    }

    if(k==n)
    {
        printf("%d is a Perfect Number.\n",n);
    }
    else
    {
        printf("%d is Not a Perfect Number.\n",n);
    }
    k=0;
   }


    return 0;
}

