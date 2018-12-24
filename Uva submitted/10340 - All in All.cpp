#include<bits/stdc++.h>
using namespace std;
main()
{
    int i, j, k, l, pos;
    char str[1000000], s1[1000000], s4[1000000], s2[1000000], s3[1000000];
    while(gets(str))
    {
        int d=0, a=0, b=0;
        while(str[d]!=32)
        {
            s1[a]=str[d];
            a++;
            d++;
        }
        d = d+1;
        while(str[d]!='\0')
        {
            s2[b]=str[d];
            b++;
            d++;
        }
        s1[a]='\0';
        s2[b]='\0';
        pos = 0;
        k = 0;
        //gets(s2);
        for(i=0; s1[i]!='\0'; i++)
        {
            l=0;
            for(j=pos; s2[j]!='\0'; j++)
            {
                if(s1[i]==s2[j])
                {
                    s3[k] = s2[j];
                    k++;
                    pos = j+1;
                    l++;
                }
                if(l==1)break;
            }
        }
        s3[k]='\0';
        if(strcmp(s1,s3)==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
