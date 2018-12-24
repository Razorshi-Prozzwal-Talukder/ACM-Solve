#include<bits/stdc++.h>
using namespace std;
main()
{
    char main[500], op[500], s1[500];
    while(cin>>main)
    {
        int i, len, count=1, a, b;
        len = strlen(main);
        for(a=0; a<len; a++)
        {
            s1[a] = main[a];
        }

        s1[a] = '\0';

        while(count>=1)
        {
            for(i=0; i<len; i++)
            {
                if(i==0)
                    op[i] = s1[len-1];
                else
                    op[i] = s1[i-1];
            }
            op[i]='\0';
            if(strcmp(op,main)==0)
                break;
            else
            {
                count++;
                for(b=0; b<len; b++)
                    s1[b] = op[b];
            }
            s1[b] = '\0';

        }
        cout<<count<<endl;
    }
    return 0;
}
