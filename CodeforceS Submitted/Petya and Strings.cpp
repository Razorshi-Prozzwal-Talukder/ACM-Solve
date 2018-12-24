#include<bits/stdc++.h>
using namespace std;
main()
{
    string s1, s2;
    while(cin>>s1>>s2)
    {
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]<'a')
                s1[i]+=32;
            if(s2[i]<'a')
                s2[i]+=32;
        }
        if(s1==s2)
            cout<<0<<endl;
        if(s1<s2)
            cout<<-1<<endl;
        if(s1>s2)
            cout<<1<<endl;
    }
    return 0;
}
