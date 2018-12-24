#include<bits/stdc++.h>
using namespace std;
main()
{
    int s, n;
    while(cin>>s>>n)
    {
        int i, a, b, dragon[100000], str[100000], j, temp1, temp2, l=0;
        for(i=1; i<=n; i++)
        {
            cin>>a>>b;
            dragon[i]=a, str[i]=b;
        }

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n-1; j++)
            {
                if(dragon[j]>dragon[j+1])
                {
                    temp1 = dragon[j], temp2=str[j];
                    dragon[j] = dragon[j+1], str[j] = str[j+1];
                    dragon[j+1] = temp1, str[j+1]= temp2;
                }
            }
        }
        for(i=1; i<=n; i++)
        {
            if(dragon[i]<s)
                s = s + str[i];
            else
                l++;
        }
        if(l==0)printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
