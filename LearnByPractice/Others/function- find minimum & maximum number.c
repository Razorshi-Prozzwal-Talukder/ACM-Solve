#include<stdio.h>
#include<stdlib.h>
int highest_number(int n,int x[n])
{
    int i,j=0,l=0;
    for(i=0;i<n;i++)
    {

       l=(x[i]+j+abs(j-x[i]))/2;
       j=l;

    }
       return l;

}
int lowest_number(int n,int y[n])
{
    int a,b,c;
    for(a=0;a<n; a++)
    {

        if(a==0)
        {
            b=y[a];
            c=b;

        }

        if(b>y[a])
        {
            b=y[a];
            c=b;
        }
    }
     return c;

}


int main()
{
    int p,n,high,low;
    printf("Press How Many Numbers: ");
    scanf("%d",&n);
    int q[n];
    for(p=0; p<n; p++)
    {
        scanf("%d",&q[p]);
    }
    high=highest_number(n,q);
    low=lowest_number(n,q);

    printf("The Highest Number is: %d\n",high);
    printf("The Lowest  Number is: %d\n",low);

    return 0;

}

