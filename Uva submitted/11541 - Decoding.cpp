#include <stdio.h>
int main()
{
    int array[200], i, j, k,t, test;
    char str[200];

    while(scanf("%d ", &test)==1)
    {
        for(t=1; t<=test; t++)
        {
            k=0;
            while(scanf("%c", &str[k])==1)
            {
                if(str[k]=='\n')
                {
                     printf("Case %d: ", t);

                     for(i=0; i<k; i++)
                     {
                         for(j=0; j<array[i]; j++)
                         {
                             printf("%c", str[i]);
                         }
                     }
                     printf("\n");
                    break;
                }
                scanf("%d", &array[k++]);
            }
        }
    }
    return 0;
}
