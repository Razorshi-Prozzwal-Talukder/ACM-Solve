#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,i=1;
    string a;
    while(cin>>a)
    {
        if(a=="Hajj")
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
            i++;
        }
        else if(a=="Umrah")
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
            i++;
        }
        else if(a=="*")break;
    }
    return 0;
}

