#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int i, count=0;
        char s[20];
        getchar();
        for(i=1; i<=n; i++)
        {
            gets(s);
            if(strcmp(s,"X++")==0)
                count++;
            else if(strcmp(s,"--X")==0)
                count--;
            else if(strcmp(s,"++X")==0)
                count++;
            else if(strcmp(s,"X--")==0)
                count--;
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}
