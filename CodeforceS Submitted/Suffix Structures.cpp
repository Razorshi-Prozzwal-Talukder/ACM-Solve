#include<bits/stdc++.h>
using namespace std;
char s[1000], t[1000], ss[1000], ts[1000], xc[1000];
main()
{
    while(cin>>s>>t)
    {
        int n, m, i, j, k;

        n = strlen(s);
        m = strlen(t);
       // cout<<n<<m<<endl;

        for(i=0; i<n; i++)ss[i]=s[i];
        ss[i]='\0';
        for(i=0; i<m; i++)ts[i]=t[i];
        ts[i]='\0';


        if(n<m)printf("need tree\n");
        else if(n==m)
        {
            sort(ss, ss+n);
            sort(ts, ts+m);
            if(strcmp(ss, ts)==0)printf("array\n");
            else
                printf("need tree\n");
        }
        else if(n>m)
        {
            j=0, k=0, ts[0]='\0';
            for(i=0; i<n; i++)
            {
                if(s[i]==t[j])
                {
                    ts[k]=s[i];
                    k++, j++;
                }
            }
            ts[k]='\0';
            if(strcmp(ts, t)==0)printf("automaton\n");
            else
            {
                k=0, ss[0]='\0';
                for(i=0; i<m; i++)
                {
                    j=0;
                    while(j<n)
                    {
                        if(t[i]==s[j])
                        {
                            ss[k++]=s[j];
                            s[j]='1';
                            break;
                        }
                        j++;
                    }
                }
                ss[k]='\0';
                sort(t, t+m);
                sort(ss, ss+k);
                if(strcmp(t, ss)==0)printf("both\n");
                else
                    printf("need tree\n");
            }
        }
    }
    return 0;
}

