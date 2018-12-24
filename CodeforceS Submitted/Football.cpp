#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, x, y, i;
    while(cin>>n)
    {
        x=0, y=0;
        string s1="", s2="", s;
        cin>>s;
        s1=s; x++;
        for(i=1; i<n; i++)
        {
            cin>>s;
            if(s==s1)
                x++;
            else
            {
                s2=s;
                y++;
            }
        }
        if(y>x)cout<<s2<<endl;
        else
            cout<<s1<<endl;
    }
    return 0;
}
