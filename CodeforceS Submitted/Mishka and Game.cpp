#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int i, a, b, mi=0, ci=0;
        for(i=1; i<=n; i++)
        {
            cin>>a>>b;
            if(a>b)mi++;
            else if(b>a)ci++;
        }
        if(mi==ci)printf("Friendship is magic!^^\n");
        else if(mi>ci)printf("Mishka\n");
        else
            printf("Chris\n");
    }
    return 0;
}
