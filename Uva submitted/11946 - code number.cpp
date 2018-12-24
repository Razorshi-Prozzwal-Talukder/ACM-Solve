#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,t,j,len;
    char s[100];
    scanf("%d",&t);
    getchar();
    for(j=1; j<=t; j++)
    {
        while(gets(s))
        {
            len=strlen(s);
            if(len==0)break;
            else
            {
                for(i=0; s[i]!='\0'; i++)
                {
                    if(s[i]=='1')
                        s[i]='I';
                    else if(s[i]=='2')
                        s[i]='Z';
                    else if(s[i]=='3')
                        s[i]='E';
                    else if(s[i]=='4')
                        s[i]='A';
                    else if(s[i]=='5')
                        s[i]='S';
                    else if(s[i]=='6')
                        s[i]='G';
                    else if(s[i]=='7')
                        s[i]='T';
                    else if(s[i]=='8')
                        s[i]='B';
                    else if(s[i]=='9')
                        s[i]='P';
                    else if(s[i]=='0')
                        s[i]='O';

                    printf("%c",s[i]);
                }
                printf("\n");
            }
        }
        if(j==t)break;
        else
            printf("\n");
    }
    return 0;
}
