#include<bits/stdc++.h>
using namespace std;
main()
{
    long int i, sum=0, len, p, power, num1;
    char number[100];
    while(gets(number))
    {
       if(strcmp(number, "0")==0)break;
        len = strlen(number);
        p = len;
        //cout<<len;
        for(i=0; i<len; i++)
        {
            power = pow(2,p) - 1;
            num1 = (number[i]-'0');
            sum +=  (power*num1);
            p = p-1;
        }
        cout<<sum<<endl;
        sum = 0;
    }
    return 0;
}
