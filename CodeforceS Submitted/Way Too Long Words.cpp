#include<bits/stdc++.h>
using namespace std;
main()
{
    int number, i, len;
    char s1[100];
    while(scanf("%d",&number)==1)
    {
        getchar();
        for(i=1; i<=number; i++)
        {
            gets(s1);
            len = strlen(s1);
            if(len<=10)
                puts(s1);
            else
                printf("%c%d%c\n", s1[0],len-2,s1[len-1]);

        }
    }
    return 0;
}
