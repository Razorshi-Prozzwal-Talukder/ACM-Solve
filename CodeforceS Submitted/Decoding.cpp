#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    char s[2010], p[2010];
    while(cin>>n)
    {
        getchar();
        gets(s);
        int i, j=0, k;
        int len = strlen(s);

        if(len%2!=0)
        {
            for(i=0; i<len; i++)
            {
                if(i==0)
                {
                    p[j] = s[i];
                    j++;
                }
                else if(i%2!=0)
                {
                    for(k=j ; k>=0; k--)
                    {
                        if(k!=0)
                            p[k] = p[k-1];
                        if(k==0)
                            p[k] = s[i];
                    }
                    j++;
                }

                else if(i%2==0)
                {
                    p[j]= s[i];
                    j++;
                }

            }
            p[j] = '\0';
            puts(p);
        }
        if(len%2==0)
        {
            for(i=0; i<len; i++)
            {
                if(i==0)
                {
                    p[j] = s[i];
                    j++;
                }
                else if(i%2==0)
                {
                    for(k=j ; k>=0; k--)
                    {
                        if(k!=0)
                            p[k] = p[k-1];
                        if(k==0)
                            p[k] = s[i];
                    }
                    j++;
                }
                else if(i%2!=0)
                {
                    p[j]= s[i];
                    j++;
                }

            }
            p[j] = '\0';
            puts(p);
        }
    }
    return 0;
}
