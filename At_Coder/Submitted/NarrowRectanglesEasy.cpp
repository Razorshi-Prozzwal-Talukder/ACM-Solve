#include<bits/stdc++.h>
using namespace std;
main()
{
    int w, a, b;
    while(cin>>w>>a>>b)
    {
        if((b>=a && b<=w+a)||(a>=b && a<=w+b))printf("0\n");
        else if(b>a && b>a+w)printf("%d\n", b-(a+w));
        else if(a>b && a>b+w)printf("%d\n", a-(b+w));
    }
    return 0;
}
