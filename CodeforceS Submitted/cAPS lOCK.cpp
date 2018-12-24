#include<bits/stdc++.h>
using namespace std;
main()
{
    char s1[200];

    while(cin>>s1)
    {
        int i, co=0;
        int len = strlen(s1);
        for(i=1; i<len; i++)
        {
            if(s1[i]<'a')
                co++;
        }

        if(co==(len-1))
        {
            for(i=0; i<len; i++)
            {
                if(s1[i]<'a')
                    s1[i]=s1[i]+32;
                else
                    s1[i]=s1[i]-32;
            }
        }

        cout<<s1<<endl;
        co=0;
    }
    return 0;
}
