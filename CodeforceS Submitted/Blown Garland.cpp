#include<bits/stdc++.h>
using namespace std;
main()
{
    char s[1000];
    while(cin>>s)
    {
        int i, n, k, por, pob, poy, pog, r=0, g=0, b=0, y=0;
        int l = strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]=='B') pob=i+1;
            else if(s[i]=='G') pog=i+1;
            else if(s[i]=='Y') poy=i+1;
            else if(s[i]=='R') por=i+1;
        }
        pob=pob%4;
        por=por%4;
        pog=pog%4;
        poy=poy%4;
        for(i=0; i<l; i++)
        {
            if(s[i]=='!')
            {
                if((i+1)%4==pob) b++;
                else if((i+1)%4==por) r++;
                else if((i+1)%4==pog) g++;
                else y++;
            }
        }
        cout<<r<<' '<<b<<' '<<y<<' '<<g<<endl;
    }
    return 0;
}
