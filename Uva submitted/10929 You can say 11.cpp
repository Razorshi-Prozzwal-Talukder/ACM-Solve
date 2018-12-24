#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int i, j;
    char s1[100000];
    while(gets(s1))
    {
       long long int sum1=0, sum2=0, sum3, len;
        len = strlen(s1);
        if(s1[0]=='0' && len==1)break;

        for(i=0; i<len; i=i+2)
            sum1+=s1[i]-'\0';

        for(j=1; j<len; j=j+2)
            sum2+=s1[j]-'\0';

        sum3 = sum1-sum2;
        if(sum3%11==0)
            printf("%s is a multiple of 11.\n",s1);
        else
            printf("%s is not a multiple of 11.\n",s1);
    }
    return 0;
}
