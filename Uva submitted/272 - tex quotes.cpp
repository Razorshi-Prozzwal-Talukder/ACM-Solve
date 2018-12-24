#include<bits/stdc++.h>
using namespace std;
main()
{
    char s;
    int i, c=0;
    while(scanf("%c",&s)==1)
    {

        if(s=='"')
        {
            c++;
            if(c==1)
            {
                printf("``");
            }
            if(c==2)
            {
                printf("''");
                c=0;
            }

        }
        if (s=='1'||s=='!')
            printf("%c",s);
        if (s=='2'||s=='@')
            printf("%c",s);
        if (s=='3'||s=='#')
            printf("%c",s);
        if (s=='4'||s=='$')
            printf("%c",s);
        if (s=='5'||s=='%')
            printf("%c",s);
        if (s=='6'||s=='^')
            printf("%c",s);
        if (s=='7'||s=='&')
            printf("%c",s);
        if (s=='8'||s=='*')
            printf("%c",s);
        if (s=='9'||s=='(')
            printf("%c",s);
        if (s=='0'||s==')')
            printf("%c",s);
        if (s=='-'||s=='_')
            printf("%c",s);
        if (s=='='||s=='+')
            printf("%c",s);
        if (s=='W'||s=='w')
            printf("%c",s);
        if (s=='E'||s=='e')
            printf("%c",s);
        if (s=='R'||s=='r')
            printf("%c",s);
        if (s=='T'||s=='t')
            printf("%c",s);
        if (s=='Y'||s=='y')
            printf("%c",s);
        if (s=='U'||s=='u')
            printf("%c",s);
        if (s=='I'||s=='i')
            printf("%c",s);
        if (s=='O'||s=='o')
            printf("%c",s);
        if (s=='P'||s=='p')
            printf("%c",s);
        if (s=='[')
            printf("%c",s);
        if (s==']')
            printf("%c",s);
        if (s=='\\'|| s=='|')
            printf("%c",s);
        if (s=='S'||s=='s')
            printf("%c",s);
        if (s=='D'||s=='d')
            printf("%c",s);
        if (s=='F'||s=='f')
            printf("%c",s);
        if (s=='G'||s=='g')
            printf("%c",s);
        if (s=='H'||s=='h')
            printf("%c",s);
        if (s=='J'||s=='j')
            printf("%c",s);
        if (s=='K'||s=='k')
            printf("%c",s);
        if (s=='L'||s=='l')
            printf("%c",s);
        if (s==';'||s==':')
            printf("%c",s);
        if (s=='\'')
            printf("%c",s);
        if (s=='X'||s=='x')
            printf("%c",s);
        if (s=='C'||s=='c')
            printf("%c",s);
        if (s=='V'||s=='v')
            printf("%c",s);
        if (s=='B'||s=='b')
            printf("%c",s);
        if (s=='N'||s=='n')
            printf("%c",s);
        if (s=='M'||s=='m')
            printf("%c",s);
        if (s=='A'||s=='a')
            printf("%c",s);
        if (s=='Q'||s=='q')
            printf("%c",s);
        if (s=='Z'||s=='z')
            printf("%c",s);
        if (s==','||s=='<')
            printf("%c",s);
        if (s=='.'||s=='>')
            printf("%c",s);
        if (s=='/'||s=='?')
            printf("%c",s);
        if (s==' ')
            printf("%c",s);
        if (s=='\n')
            printf("\n");
        if(s=='`'||s=='~')
            printf("%c",s);

    }
    return 0;
}
