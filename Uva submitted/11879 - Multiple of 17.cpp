#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int len, i, remainder=0, sum;
    char str[1000];
    while(gets(str))
    {
        len = strlen(str);
        if(len==1 && str[0]=='0')break;
        else
        {
            for(i=0; i<len; i++)
            {
                sum = remainder*10+(str[i]-'0');
                remainder = sum%17;
            }
            if(remainder==0)
                printf("1\n");
            else
                printf("0\n");
        }
        remainder=0;

    }

    return 0;
}
