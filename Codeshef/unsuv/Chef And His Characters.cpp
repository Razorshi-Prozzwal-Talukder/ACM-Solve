#include<bits/stdc++.h>
using namespace std;
char st[500000], ma[500000];
int main()
{
    int n;
    while(cin>>n)
    {
        int i, j, sa=0, c=0, h=0, e=0, f=0, tot=0;
        for(i=1; i<=n; i++)
        {
            cin>>ma;
            j=0, sa=0;
            while(j<strlen(ma))
            {
                if(ma[j]>='a' && ma[j]<='z')st[sa++]=ma[j];
                else if(ma[j]>='A' && ma[j]<='Z')st[sa++]=ma[j]+32;
                j++;
            }
            st[sa]='\0';
            tot=0;
            for(j=0; j<strlen(st); j++)
            {
                if((st[j]=='c' || st[j]=='h' ||st[j]=='e' ||st[j]=='f') && (strlen(st)-j>=3))
                {
                    c=0, h=0, e=0, f=0;
                    for(int k=j; k<=j+3; k++)
                    {
                        if(st[k]=='c')c++;
                        if(st[k]=='h')h++;
                        if(st[k]=='e')e++;
                        if(st[k]=='f')f++;
                    }
                    if(c==1 && h==1 && e==1 && f==1)tot++;
                }
            }
            if(tot>0)printf("lovely %d\n", tot);
            else
                printf("normal\n");
                st[0]='\0';
        }
    }
    return 0;
}
