#include<bits/stdc++.h>
using namespace std;
char as[1010];
int a[42];
main()
{
    int k;
    while(cin>>k)
    {
        getchar();
        cin>>as;
        bool flag = true;

        int i, j, p;

        for(i=0; i<26; i++)a[i]=0;
        for(i=0; i<strlen(as); i++)
            a[as[i]-'a']++;
        for(i=0; i<26; i++)
        {
            if(a[i]%k!=0)flag=false;
        }
        if(flag)
        {
            for(i=0; i<k; i++)
            {
                for(j=0; j<26; j++)
                {
                    for(p=0; p< a[j]/k; p++)
                     printf("%c", j+'a');
                }
            }
        }
        else
            printf("-1\n");
    }
    return 0;
}
