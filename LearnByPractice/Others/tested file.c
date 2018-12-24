#include<stdio.h>
#include<string.h>
main()
{
    int i,j,k,l;
    char a[100];
    while(scanf("%d",&i)==1)
    {
        for(j=1; j<=i; j++)
        {
            scanf("%s",&a[100]);
            if(a[100]=='Hajj')
                printf("Case %d: Hajj-e-Akbar\n",j);
            else if(a[100]=='Umrah')
                printf("Case %d: Hajj-e-Asghar\n",j);
        }
    }
}
