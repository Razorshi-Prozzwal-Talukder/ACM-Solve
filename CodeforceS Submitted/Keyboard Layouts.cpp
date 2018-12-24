#include<bits/stdc++.h>
using namespace std;
char one[10000], two[10000], three[10000], save[10000], ch;
main()
{

    while(cin>>one>>two>>three)
    {
        int i, j, p=0;
        for(i=0; i<strlen(three); i++)
        {
            if(three[i]>='A' && three[i]<='Z')
            {
                ch = three[i]+32;
                //cout<<ch<<endl;
                for(j=0; j<strlen(one); j++)
                {
                    if(one[j]==ch)
                    {
                        save[p++]=two[j]-32;
                        break;
                    }
                }
            }
             else if(three[i]>='a' && three[i]<='z')
             {
                 ch = three[i];
                for(j=0; j<strlen(one); j++)
                {
                    if(one[j]==ch)
                    {
                        save[p++]=two[j];
                        break;
                    }
                }
             }
             else
                save[p++]=three[i];
        }
        save[p]='\0';
        cout<<save<<endl;
    }
    return 0;
}
