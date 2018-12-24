#include<bits/stdc++.h>
using namespace std;
main()
{
    char str[5000];
    while(cin>>str)
    {
        int i, up=0, lo=0;
        for(i=0; str[i]!='\0'; i++)
        {
            if(str[i]>='A' && str[i]<='Z')up++;
            else
                lo++;
        }
        if(up>lo)
        {
            for(i=0; str[i]!='\0'; i++)
            {
                if(str[i]>='a' && str[i]<='z')
                    str[i]=str[i]-32;
            }
        }
        else
        {
            for(i=0; str[i]!='\0'; i++)
            {
                if(str[i]>='A' && str[i]<='Z')
                    str[i]=str[i]+32;
            }
        }
        cout<<str<<endl;
    }
    return 0;
}
