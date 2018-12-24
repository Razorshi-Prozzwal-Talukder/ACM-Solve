#include<bits/stdc++.h>
using namespace std;
main()
{
    char as[10000];
    while(cin>>as)
    {
        int i, four=0, seven=0;
        for(i=0; i<strlen(as); i++)
        {
            if(as[i]=='4')four++;
            else if(as[i]=='7')seven++;
        }
        if(four==0 && seven==0)printf("-1\n");
        else if(seven<=four)printf("4\n");
        else
            printf("7\n");
    }
    return 0;
}
