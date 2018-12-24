#include<bits/stdc++.h>
using namespace std;
main()
{
    char s[100];
    while(cin>>s)
    {
        int c=0;
        for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
            {
                c++;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(c==0)
            cout<<"NO"<<endl;
    }
    return 0;
}
