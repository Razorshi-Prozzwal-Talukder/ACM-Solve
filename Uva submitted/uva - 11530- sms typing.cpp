#include<bits/stdc++.h>
using namespace std;
main()
{
    int test,i,j,sum=0,len;
    char txt[101];

    while(scanf("%d",&test)==1)
    {
        for(i=0; i<=test; i++)
        {
            gets(txt);
            len=strlen(txt);
            for(j=0; j<len; j++)
            {
                if(txt[j]=='a'||txt[j]=='d'||txt[j]=='g'||txt[j]=='j'||txt[j]=='m'||txt[j]=='p'||txt[j]=='t'||txt[j]=='w')
                    sum=sum+1;
                else if(txt[j]=='b'||txt[j]=='e'||txt[j]=='h'||txt[j]=='k'||txt[j]=='n'||txt[j]=='q'||txt[j]=='u'||txt[j]=='x')
                    sum=sum+2;
                else if(txt[j]=='c'||txt[j]=='f'||txt[j]=='i'||txt[j]=='l'||txt[j]=='o'||txt[j]=='r'||txt[j]=='v'||txt[j]=='y')
                    sum=sum+3;
                else if(txt[j]=='s'||txt[j]=='z')
                    sum=sum+4;
                else if(txt[j]==' ')
                    sum=sum+1;
            }
            if(i!=0)
                printf("Case #%d: %d\n",i,sum);
            sum=0;

        }
    }

    return 0;
}










