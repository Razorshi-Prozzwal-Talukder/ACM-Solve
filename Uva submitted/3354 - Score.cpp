#include<bits/stdc++.h>
using namespace std;
main()
{
    int test,i,j;
    char s1[1000];
    while(scanf("%d",&test)==1)
    {
        getchar();
        for(i=1; i<=test; i++)
        {
            gets(s1);
            int sum=0, c=0;
            for(j=0; s1[j]!='\0'; j++)
            {
                if(s1[j]=='O')
                {
                    c++;
                    sum+=c;
                }
                //if(s1[j]=='X')
                else
                    c = 0;
            }
            cout<<sum<<endl;
            //sum=0;
        }
    }
    return 0;
}
