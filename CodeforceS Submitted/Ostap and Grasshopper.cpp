#include<bits/stdc++.h>
using namespace std;
main()
{
    char str[1000];
    int n, k, i;
    while(cin>>n>>k)
    {
        getchar();
        gets(str);
        //while(str[i]=='G' || )
        int nope=0, got=0;
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]=='G')
            {
                while(i<strlen(str))
                {
                    i = i+k;
                    if(str[i]=='#')
                    {
                        nope++;
                        break;
                    }
                    else if(str[i]=='.')
                        continue;
                    else if(str[i]=='T')
                    {
                        got++;
                        break;
                    }
                }
            }
            else if(str[i]=='T')
            {
                while(i<strlen(str))
                {
                    i = i+k;
                    if(str[i]=='#')
                    {
                        nope++;
                        break;
                    }
                    else if(str[i]=='.')
                        continue;
                    else if(str[i]=='G')
                    {
                        got++;
                        break;
                    }
                }
            }
            if(nope>0)break;
            else if(got>0)break;
        }

        if(got>0)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
