#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, i,j,k;
    char s1[10000], s2[10000];
    while(scanf("%d",&n)==1);
    {
        for(i=1; i<=n; i++)
        {
            gets(s1);
            int len = strlen(s1);
            float root_result = sqrt(len);
            float result = root_result - (int)root_result;
            if(result > 0.00)
                cout<<"INVALID"<<endl;
            else
            {
                int l=0;
                for(j=0; j<(int)root_result ; j++)
                {
                    k=j;
                    for(k=j; k<len; k=k+(int)root_result)
                    {
                        s2[l] = s1[k];
                        l++;
                    }
                }
                s2[l] = '\0';
                printf("%s\n",s2);
            }
        }
    }
    return 0;
}
