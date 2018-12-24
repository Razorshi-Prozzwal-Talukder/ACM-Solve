#include<bits/stdc++.h>
using namespace std;
main()
{
    char as[1000];
    while(cin>>as)
    {
        int i, c=0;
        for(i=0; i<strlen(as); i++)
        {
            if(as[i]=='A')
            {
                if(as[i+1]=='n' && as[i+2]=='n')c++;
                else
                    continue;
            }
            else if(as[i]=='D')
            {
                if(as[i+1]=='a' && as[i+2]=='n'&& as[i+3]=='i' && as[i+4]=='l')
                    c++;
                else
                    continue;
            }
            else if(as[i]=='O')
            {
                 if(as[i+1]=='l' && as[i+2]=='y'&& as[i+3]=='a')c++;
                 else
                    continue;
            }
            else if(as[i]=='S')
            {
                 if(as[i+1]=='l' && as[i+2]=='a'&& as[i+3]=='v'&& as[i+4]=='a')c++;
                 else
                    continue;
            }
            else if(as[i]=='N')
            {
                if(as[i+1]=='i' && as[i+2]=='k'&& as[i+3]=='i'&& as[i+4]=='t' && as[i+5]=='a')c++;
                 else
                    continue;
            }

            //cout<<c<<endl;
        }
        if(c==1)printf("YES\n");
        else
            printf("NO\n");
    }
    return .0;
}
