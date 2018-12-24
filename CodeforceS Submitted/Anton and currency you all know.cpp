#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char as[1000000];
main()
{
    while(gets(as))
    {
        ll i, j=0, g=0;
        for(i=0; i<strlen(as)-1; i++)
        {
            if(as[i]=='0'||as[i]=='2'|| as[i]=='4'|| as[i]=='6'|| as[i]=='8')
            {
                g++;
                if(as[i]<as[strlen(as)-1])
                {
                    j = i;
                    break;
                }
                else
                    j=i;
            }
        }
        if(g==0)printf("-1\n");
        else
        {
            swap(as[j], as[strlen(as)-1]);
            puts(as);
        }
    }
    return 0;
}
