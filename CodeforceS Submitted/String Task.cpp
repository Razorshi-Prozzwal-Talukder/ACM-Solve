#include<bits/stdc++.h>
using namespace std;
main()
{
    char s1[1000], s2[1000];
    while(gets(s1))
    {
        int i, j=0;
        for(i=0; s1[i]!='\0'; )
        {

            if(s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U'||s1[i]=='Y'||s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='y')
            {
               i++;
            }
            else
            {
                if(s1[i]>='A' && s1[i]<='Z')
                {
                    s1[i]=s1[i]+32;
                    s2[j]='.';
                    j++;
                    s2[j]=s1[i];
                    j++;
                }
                else
                {
                    s2[j]='.';
                    j++;
                    s2[j]=s1[i];
                    j++;
                }
                i++;
            }
        }
        s2[j]='\0';
        puts(s2);
    }
    return 0;
}
