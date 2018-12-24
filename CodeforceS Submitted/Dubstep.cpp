#include<bits/stdc++.h>
using namespace std;
main()
{
    char str[500], str2[500];
    while(cin>>str)
    {
        int i, j, k=0, wg=0;
        for(i=0; str[i]!='\0'; )
        {
            if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
            {
                i=i+3;
                if(wg==1)
                {
                    str2[k]=' ';
                    k++;
                    wg=0;
                }
            }
            else
            {
                str2[k]=str[i];
                k++;
                i++;
                wg=1;
            }
        }
        str2[k]='\0';
        cout<<str2<<endl;
    }
    return 0;
}
