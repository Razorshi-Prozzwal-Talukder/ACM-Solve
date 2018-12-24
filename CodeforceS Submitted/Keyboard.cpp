#include<bits/stdc++.h>
using namespace std;
main()
{
    char ch, as[10000];
    while(cin>>ch)
    {
        cin>>as;
        if(ch=='R')
        {
            for(int i=0; i<strlen(as); i++)
            {
                if(as[i]=='w')as[i]='q';
                else if(as[i]=='e')as[i]='w';
                else if(as[i]=='r')as[i]='e';
                else if(as[i]=='t')as[i]='r';
                else if(as[i]=='y')as[i]='t';
                else if(as[i]=='u')as[i]='y';
                else if(as[i]=='i')as[i]='u';
                else if(as[i]=='o')as[i]='i';
                else if(as[i]=='p')as[i]='o';
                else if(as[i]=='[')as[i]='p';

                else if(as[i]=='s')as[i]='a';
                else if(as[i]=='d')as[i]='s';
                else if(as[i]=='f')as[i]='d';
                else if(as[i]=='g')as[i]='f';
                else if(as[i]=='h')as[i]='g';
                else if(as[i]=='j')as[i]='h';
                else if(as[i]=='k')as[i]='j';
                else if(as[i]=='l')as[i]='k';
                else if(as[i]==';')as[i]='l';

                else if(as[i]=='x')as[i]='z';
                else if(as[i]=='c')as[i]='x';
                else if(as[i]=='v')as[i]='c';
                else if(as[i]=='b')as[i]='v';
                else if(as[i]=='n')as[i]='b';
                else if(as[i]=='m')as[i]='n';
                else if(as[i]==',')as[i]='m';
                else if(as[i]=='.')as[i]=',';
                else if(as[i]=='/')as[i]='.';
            }

            cout<<as<<endl;
        }
        else
        {
            for(int i=0; i<strlen(as); i++)
            {
                     if(as[i]=='q')as[i]='w';
                else if(as[i]=='w')as[i]='e';
                else if(as[i]=='e')as[i]='r';
                else if(as[i]=='r')as[i]='t';
                else if(as[i]=='t')as[i]='y';
                else if(as[i]=='y')as[i]='u';
                else if(as[i]=='u')as[i]='i';
                else if(as[i]=='i')as[i]='o';
                else if(as[i]=='o')as[i]='p';
                else if(as[i]=='p')as[i]='[';

                else if(as[i]=='a')as[i]='s';
                else if(as[i]=='s')as[i]='d';
                else if(as[i]=='d')as[i]='f';
                else if(as[i]=='f')as[i]='g';
                else if(as[i]=='g')as[i]='h';
                else if(as[i]=='h')as[i]='j';
                else if(as[i]=='j')as[i]='k';
                else if(as[i]=='k')as[i]='l';
                else if(as[i]=='l')as[i]=';';

                else if(as[i]=='z')as[i]='x';
                else if(as[i]=='x')as[i]='c';
                else if(as[i]=='c')as[i]='v';
                else if(as[i]=='v')as[i]='b';
                else if(as[i]=='b')as[i]='n';
                else if(as[i]=='n')as[i]='m';
                else if(as[i]=='m')as[i]=',';
                else if(as[i]==',')as[i]='.';
                else if(as[i]=='.')as[i]='/';
            }

            cout<<as<<endl;

        }
    }
    return 0;
}
