#include<bits/stdc++.h>
using namespace std;
main()
{
    int a, b;
    while(cin>>a>>b)
    {
        int x=0, y=0;
        while(a!=0 && b!=0)
        {
            x++;
            a=a-1, b=b-1;
        }
        if(a!=0 || b!=0)
        {
           while(a>=2 || b>=2)
           {
               y++;
               a=a-2, b=b-2;
           }
        }
        if(a==2 || b==2)y++;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
