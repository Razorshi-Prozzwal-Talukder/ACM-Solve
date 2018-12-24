#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    char s[500], r[500];
    while(cin>>n)
    {
        int k=0;
        getchar();
        gets(s);
        for(int i=0; i<n; )
        {
            if(s[i]=='o' && s[i+1]=='g' && s[i+2]=='o')
            {
                int x;
                for(x=i+3; x<n ; )
                {
                    if(s[x]=='g' && s[x+1]=='o')
                    {
                        x=x+2;
                    }
                    else
                        break;
                }
                r[k]='*';
                k++;
                r[k]='*';
                k++;
                r[k]='*';
                k++;
                i=x;
            }
            else
            {
                r[k]=s[i];
                k++;
                i++;
            }
        }
        r[k]='\0';
        puts(r);
    }
    return 0;
}
