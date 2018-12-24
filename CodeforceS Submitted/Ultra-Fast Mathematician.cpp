#include<bits/stdc++.h>
using namespace std;
main()
{
    char as[1000], bs[1000], cs[1000];
    while(gets(as))
    {
        gets(bs);
        int i, t=0;
        for(i=0; i<strlen(as); i++)
        {
            if(as[i]==bs[i])
                cs[t++]='0';
            else
                cs[t++]='1';
        }
        cs[t]='\0';
        puts(cs);
    }
    return 0;
}
