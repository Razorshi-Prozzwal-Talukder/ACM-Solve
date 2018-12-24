#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,word=0,count_w=0,len;
    char sen[1000];
    while(gets(sen))
    {
        len=strlen(sen);
        for(i=0; i<len ; i++)        {

            if((sen[i]>=65 && sen[i]<=90)||(sen[i]>=97 && sen[i]<=122))
                word++;
            else
                word=0;

            if(word==1)
            {
                count_w++;
            }
        }
        printf("%d\n",count_w);
        word=0;
        count_w=0;
    }
    return 0;
}

