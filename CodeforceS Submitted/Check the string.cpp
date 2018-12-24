#include<bits/stdc++.h>
using namespace std;
main()
{
    char str[5010];
    while(cin>>str)
    {
        int i, a=0, b=0, c=0, ina=0, inb=0, inc=0;
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]=='a')
            {
                ina++;
                if(inb==0 && inc==0) a++;
                else
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }

            else if(str[i]=='b')
            {
                inb++;
                if(ina>0 && inc==0)b++;
                else
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }

            else if(str[i]=='c')
            {
                inc++;
                if(inb>0 && inb>0) c++;
                else
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
        if(((c==a && c==b) || (c==a && c!=b) || (c!=a && c==b)) && c!=0)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
