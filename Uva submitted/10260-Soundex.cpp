#include<bits/stdc++.h>
using namespace std;
main()
{
    int i, f1=0,f2=0,f3=0,f4=0,f5=0,f6=0;
    char str[100];
    while(gets(str))
    {
        for(i=0; str[i]!='\0'; i++)
        {
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='H'||str[i]=='W'||str[i]=='Y')
            {
                f1=0,f2=0,f3=0,f4=0,f5=0,f6=0;
                continue;
            }
            else if(str[i]=='B'||str[i]=='F'||str[i]=='P'||str[i]=='V')
            {
                f1++;
                if(f1==1)printf("1");
                f2=0,f3=0,f4=0,f5=0,f6=0;
            }
            else if(str[i]=='C'||str[i]=='G'||str[i]=='J'||str[i]=='K'||str[i]=='Q'||str[i]=='S'||str[i]=='X'||str[i]=='Z')
            {
                f2++;
                if(f2==1)printf("2");
                f1=0,f3=0,f4=0,f5=0,f6=0;
            }
            else if(str[i]=='D'||str[i]=='T')
            {
                f3++;
                if(f3==1)printf("3");
                f2=0,f1=0,f4=0,f5=0,f6=0;
            }
            else if(str[i]=='L')
            {
                f4++;
                if(f4==1)printf("4");
                f2=0,f1=0,f3=0,f5=0,f6=0;
            }
            else if(str[i]=='M'||str[i]=='N')
            {
                f5++;
                if(f5==1)printf("5");
                f2=0,f1=0,f4=0,f3=0,f6=0;
            }
            else if(str[i]=='R')
            {
                f6++;
                if(f6==1)printf("6");
                f2=0,f1=0,f3=0,f5=0,f4=0;
            }
        }
        f1=0,f2=0,f3=0,f4=0,f5=0,f6=0;
        printf("\n");

    }


    return 0;
}
