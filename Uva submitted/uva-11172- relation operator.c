#include<stdio.h>///submitted
int main()
{
    int n,a,b,i;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            printf("%c\n",62);
        }
        else if(a<b)
        {
            printf("%c\n",60);
        }
        else if(a==b)
        {
            printf("%c\n",61);
        }
    }

    return 0;
}
