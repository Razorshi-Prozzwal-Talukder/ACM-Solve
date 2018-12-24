#include<bits/stdc++.h>
using namespace std;
main()
{
    char s1[200], s2[200], s3[200];
    while(cin>>s1)
    {
        int i, j=0, k, l, m=0;
        for(i=0; s1[i]!='\0'; i++)
        {
            if(s1[i]!='+')
            {
                s2[j] = s1[i];
                j++;
            }
        }
        s2[j] = '\0';
        int len = strlen(s2);
        sort(s2,s2+len);
        for(l=0; l<len; l++)
        {
            s3[m] = s2[l];
            if(l+1<len)
            {
                m++;
                s3[m]='+';
            }
            m++;
        }
        s3[m]='\0';
        cout<<s3<<endl;
    }
    return 0;
}
