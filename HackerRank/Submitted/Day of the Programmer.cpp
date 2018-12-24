#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int i, j, k, got=0;
        if((n%4==0 && n%400!=0 && n%100!=0)||(n%4==0 && n%400==0 && n%100!=0))
            got++;
        if(got>0)
        printf("12.09.%d\n",n);
        if(got==0)
           printf("13.09.%d\n",n);
    }
    return 0;
}
