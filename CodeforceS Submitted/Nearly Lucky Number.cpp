#include<bits/stdc++.h>
using namespace std;
main()
{
    char s[500];
    while(cin>>s)
    {
        int i, count=0;
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]=='4'||s[i]=='7')
                count++;
        }
        if(count==4 ||count==7)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
