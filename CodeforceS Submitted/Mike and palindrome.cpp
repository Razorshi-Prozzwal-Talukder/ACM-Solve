#include<bits/stdc++.h>
using namespace std;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char as[10000];
    while(cin>>as)
    {
        int len=strlen(as), i, cnt=0;
        for( i=0; i<len/2; i++)
            if(as[i]!=as[len-i-1])cnt++;

        if(cnt>=2)printf("NO\n");
        else if(cnt==1)printf("YES\n");
        else if(cnt==0 && len%2==1)printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
