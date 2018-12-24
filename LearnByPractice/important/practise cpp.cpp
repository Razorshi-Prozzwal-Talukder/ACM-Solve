#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,sum=0,len,t,m,c=0,k,l;
    cin>>i;
    char s[100];
    itoa(i,s,10);
    len=strlen(s);
    for(j=0; s[j]!='\0' ; j++)///sum of number of a string
    {
        t=s[j]-'0';
        sum+=t;
    }
    for(k=0,l=len-1; k<l ; k++,l--)/// Inverse a string.
    {
        m =s[k];
       s[k]=s[l];
       s[l] = m;
       c++;
    }

    printf("sum is: %d\n",sum);

    printf("%s",s);



    return 0;
}
