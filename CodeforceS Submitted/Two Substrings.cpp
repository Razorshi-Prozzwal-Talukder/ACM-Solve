#include<bits/stdc++.h>
using namespace std;
char st[1000000], st2[1000000];
main()
{
    while(cin>>st)
    {
        strcpy(st2, st);
        long long int i,j, l, c=0, g=0, p=0, l2;

        l = strlen(st);
        l2 = strlen(st2);

        for(i=0; i<l; )
        {
            if(st[i]=='A' && st[i+1]=='B' && c==0)
            {
                c++;
                i=i+2;
            }
            else if(st[i]=='B' && st[i+1]=='A' && c==1)
            {
                g++;
                break;
            }
            else
                i++;
        }
        if(g==0)
        {
            for(j=0; j<l2; )
            {
                if(st2[j]=='B' && st2[j+1]=='A' && p==0)
                {
                    p++;
                    j=j+2;
                }
                else if(st2[j]=='A' && st2[j+1]=='B' && p==1)
                {
                    g++;
                    break;
                }
                else
                     j++;
            }
        }
        if(g>0)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
