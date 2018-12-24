#include<bits/stdc++.h>
using namespace std;
main()
{
    char as[10000];
    while(gets(as))
    {
        int maxi=0, ct=0, i;
        for(i=0; i<strlen(as); i++)
        {
            ct++;
            if(ct>maxi)
                maxi=ct;
            if(as[i]=='A'||as[i]=='E'||as[i]=='I'||as[i]=='O'||as[i]=='U'||as[i]=='Y')
                ct=0;
        }
        ct++;
        cout<<max(ct, maxi)<<endl;
    }
    return 0;
}
