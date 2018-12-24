#include<bits/stdc++.h>
using namespace std;
int as[100000], save[1000];
main()
{
    char s[1000];
    int l;
    char ck='a';
    for(l=1 ; l<=26; l++)
    {
        save[l] = ck;
        ck = ck + 1;
    }
    while(gets(s))
    {
        int k, i, sum=0, j, d, m, maxi=0;
        cin>>k;
        for(i=1; i<=26; i++)
        {
            cin>>as[i];
            if(as[i]>=maxi)maxi=as[i];
        }
        for(i=0; i<strlen(s); i++)
        {
            d = s[i];
            for(j=1; j<=26; j++)
            {
                if(save[j]==d)break;
            }
            sum = sum + ((i+1)*as[j]);
        }
        m=i;
        i=i+1;
        for(i; i<=(m+k); i++)
        {
            sum =sum + (i*maxi);
        }
        cout<<sum<<endl;
        getchar();
    }
    return 0;
}
